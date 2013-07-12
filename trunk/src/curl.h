#ifndef S3FS_CURL_H_
#define S3FS_CURL_H_

//----------------------------------------------
// class BodyData
//----------------------------------------------
// memory class for curl write memory callback 
//
class BodyData
{
  private:
    char* text;    
    size_t lastpos;
    size_t bufsize;

  private:
    bool IsSafeSize(size_t addbytes) const {
      return ((lastpos + addbytes + 1) > bufsize ? false : true);
    }
    bool Resize(size_t addbytes);

  public:
    BodyData() : text(NULL), lastpos(0), bufsize(0) {}
    ~BodyData() {
      Clear();
    }

    void Clear(void);
    bool Append(void* ptr, size_t bytes);
    bool Append(void* ptr, size_t blockSize, size_t numBlocks) {
      return Append(ptr, (blockSize * numBlocks));
    }
    const char* str() const;
    size_t size() const {
      return lastpos;
    }
};

//----------------------------------------------
// Utility structs & typedefs
//----------------------------------------------
typedef std::vector<std::string> etaglist_t;

// Each part information for Multipart upload
struct filepart
{
  bool        uploaded;     // does finish uploading
  std::string etag;         // expected etag value
  int         fd;           // base file(temporary full file) discriptor
  off_t       startpos;     // seek fd point for uploading
  ssize_t     size;         // uploading size
  etaglist_t* etaglist;     // use only parallel upload
  int         etagpos;      // use only parallel upload

  filepart() : uploaded(false), fd(-1), startpos(0), size(-1), etaglist(NULL), etagpos(-1) {}
  ~filepart()
  {
    clear();
  }

  void clear(bool isfree = true)
  {
    uploaded = false;
    etag     = "";
    fd       = -1;
    startpos = 0;
    size     = -1;
    etaglist = NULL;
    etagpos  = - 1;
  }

  void add_etag_list(etaglist_t* list)
  {
    if(list){
      list->push_back(std::string(""));
      etaglist = list;
      etagpos  = list->size() - 1;
    }else{
      etaglist = NULL;
      etagpos  = - 1;
    }
  }
};

// for progress
struct case_insensitive_compare_func
{
  bool operator()(const std::string& a, const std::string& b){
    return strcasecmp(a.c_str(), b.c_str()) < 0;
  }
};
typedef std::map<std::string, std::string, case_insensitive_compare_func> mimes_t;
typedef std::pair<double, double>   progress_t;
typedef std::map<CURL*, time_t>     curltime_t;
typedef std::map<CURL*, progress_t> curlprogress_t;

class S3fsMultiCurl;

//----------------------------------------------
// class S3fsCurl
//----------------------------------------------
// Class for lapping curl
//
class S3fsCurl
{
    friend class S3fsMultiCurl;  

  private:
    // class variables
    static pthread_mutex_t curl_handles_lock;
    static pthread_mutex_t curl_share_lock;
    static bool            is_initglobal_done;
    static CURLSH*         hCurlShare;
    static bool            is_dns_cache;
    static long            connect_timeout;
    static time_t          readwrite_timeout;
    static int             retries;
    static bool            is_public_bucket;
    static std::string     default_acl;             // TODO: to enum
    static bool            is_use_rrs;
    static bool            is_use_sse;
    static bool            is_content_md5;
    static std::string     AWSAccessKeyId;
    static std::string     AWSSecretAccessKey;
    static long            ssl_verify_hostname;
    static const EVP_MD*   evp_md;
    static curltime_t      curl_times;
    static curlprogress_t  curl_progress;
    static std::string     curl_ca_bundle;
    static mimes_t         mimeTypes;
    static int             max_parallel_upload;

    // variables
    CURL*                hCurl;
    std::string          path;               // target object path
    std::string          base_path;          // base path (for multi curl head request)
    std::string          saved_path;         // saved path = cache key (for multi curl head request)
    std::string          url;                // target object path(url)
    struct curl_slist*   requestHeaders;
    headers_t            responseHeaders;    // header data by HeaderCallback
    BodyData*            bodydata;           // body data by WriteMemoryCallback
    BodyData*            headdata;           // header data by WriteMemoryCallback
    long                 LastResponseCode;
    const unsigned char* postdata;           // use by post method and read callback function.
    int                  postdata_remaining; // use by post method and read callback function.
    filepart             partdata;           // use by multipart upload

  public:
    // constructor/destructor
    S3fsCurl();
    ~S3fsCurl();

  private:
    // class methods
    static void LockCurlShare(CURL* handle, curl_lock_data nLockData, curl_lock_access laccess, void* useptr);
    static void UnlockCurlShare(CURL* handle, curl_lock_data nLockData, void* useptr);
    static int CurlProgress(void *clientp, double dltotal, double dlnow, double ultotal, double ulnow);

    static bool InitMimeType(const char* MimeFile = NULL);
    static bool LocateBundle(void);
    static size_t HeaderCallback(void *data, size_t blockSize, size_t numBlocks, void *userPtr);
    static size_t WriteMemoryCallback(void *ptr, size_t blockSize, size_t numBlocks, void *data);
    static size_t ReadCallback(void *ptr, size_t size, size_t nmemb, void *userp);
    static size_t UploadReadCallback(void *ptr, size_t size, size_t nmemb, void *userp);

    static bool UploadMultipartPostCallback(S3fsCurl* s3fscurl);
    static S3fsCurl* UploadMultipartPostRetryCallback(S3fsCurl* s3fscurl);

    // methods
    bool ClearInternalData(void);
    std::string CalcSignature(std::string method, std::string strMD5, std::string content_type, std::string date, std::string resource);
    bool GetUploadId(std::string& upload_id);

    int PreMultipartPostRequest(const char* tpath, headers_t& meta, std::string& upload_id, bool ow_sse_flg);
    int CompleteMultipartPostRequest(const char* tpath, std::string& upload_id, etaglist_t& parts);
    int UploadMultipartPostSetup(const char* tpath, int part_num, std::string& upload_id);
    int UploadMultipartPostRequest(const char* tpath, int part_num, std::string& upload_id);
    int CopyMultipartPostRequest(const char* from, const char* to, int part_num, std::string& upload_id, headers_t& meta, bool ow_sse_flg);

  public:
    // class methods
    static bool InitS3fsCurl(const char* MimeFile = NULL, bool reinit = false);
    static bool DestroyS3fsCurl(bool reinit = false);
    static bool InitGlobalCurl(void);
    static bool DestroyGlobalCurl(void);
    static bool InitShareCurl(void);
    static bool DestroyShareCurl(void);
    static int ParallelMultipartUploadRequest(const char* tpath, headers_t& meta, int fd, bool ow_sse_flg);

    // class methods(valiables)
    static std::string LookupMimeType(std::string name);
    static bool SetDnsCache(bool isCache);
    static long SetConnectTimeout(long timeout);
    static time_t SetReadwriteTimeout(time_t timeout);
    static time_t GetReadwriteTimeout(void) { return S3fsCurl::readwrite_timeout; }
    static int SetRetries(int count);
    static bool SetPublicBucket(bool flag);
    static bool IsPublicBucket(void) { return S3fsCurl::is_public_bucket; }
    static std::string SetDefaultAcl(const char* acl);
    static bool SetUseRrs(bool flag);
    static bool GetUseRrs(void) { return S3fsCurl::is_use_rrs; }
    static bool SetUseSse(bool flag);
    static bool GetUseSse(void) { return S3fsCurl::is_use_sse; }
    static bool SetContentMd5(bool flag);
    static bool SetAccessKey(const char* AccessKeyId, const char* SecretAccessKey);
    static bool IsSetAccessKeyId(void) { return (0 < S3fsCurl::AWSAccessKeyId.size() && 0 < S3fsCurl::AWSSecretAccessKey.size()); }
    static long SetSslVerifyHostname(long value);
    static long GetSslVerifyHostname(void) { return S3fsCurl::ssl_verify_hostname; }
    static int SetMaxParallelUpload(int value);

    // methods
    bool CreateCurlHandle(bool force = false);
    bool DestroyCurlHandle(void);

    bool GetResponseCode(long& responseCode);
    int RequestPerform(FILE* file = NULL);
    int DeleteRequest(const char* tpath);
    bool PreHeadRequest(const char* tpath, const char* bpath = NULL, const char* savedpath = NULL);
    bool PreHeadRequest(std::string& tpath, std::string& bpath, std::string& savedpath) {
      return PreHeadRequest(tpath.c_str(), bpath.c_str(), savedpath.c_str());
    }
    int HeadRequest(const char* tpath, headers_t& meta);
    int PutHeadRequest(const char* tpath, headers_t& meta, bool ow_sse_flg);
    int PutRequest(const char* tpath, headers_t& meta, int fd, bool ow_sse_flg);
    int GetObjectRequest(const char* tpath, int fd);
    int CheckBucket(void);
    int ListBucketRequest(const char* tpath, const char* query);
    int MultipartListRequest(std::string& body);
    int MultipartHeadRequest(const char* tpath, off_t size, headers_t& meta, bool ow_sse_flg);
    int MultipartUploadRequest(const char* tpath, headers_t& meta, int fd, bool ow_sse_flg);
    int MultipartRenameRequest(const char* from, const char* to, headers_t& meta, off_t size);

    // methods(valiables)
    CURL* GetCurlHandle(void) const { return hCurl; }
    std::string GetPath(void) const { return path; }
    std::string GetBasePath(void) const { return base_path; }
    std::string GetSpacialSavedPath(void) const { return saved_path; }
    std::string GetUrl(void) const { return url; }
    headers_t* GetResponseHeaders(void) { return &responseHeaders; }
    BodyData* GetBodyData(void) const { return bodydata; }
    BodyData* GetHeadData(void) const { return headdata; }
    long GetLastResponseCode(void) const { return LastResponseCode; }
};

//----------------------------------------------
// class S3fsMultiCurl
//----------------------------------------------
// Class for lapping multi curl
//
typedef std::map<CURL*, S3fsCurl*> s3fscurlmap_t;
typedef bool (*S3fsMultiSuccessCallback)(S3fsCurl* s3fscurl);    // callback for succeed multi request
typedef S3fsCurl* (*S3fsMultiRetryCallback)(S3fsCurl* s3fscurl); // callback for failuer and retrying

class S3fsMultiCurl
{
  private:
    static int    max_multireq;

    CURLM*        hMulti;
    s3fscurlmap_t cMap_all;  // all of curl requests
    s3fscurlmap_t cMap_req;  // curl requests are sent

    S3fsMultiSuccessCallback SuccessCallback;
    S3fsMultiRetryCallback   RetryCallback;

  private:
    int MultiPerform(void);
    int MultiRead(void);

  public:
    S3fsMultiCurl();
    ~S3fsMultiCurl();

    static int SetMaxMultiRequest(int max);
    static int GetMaxMultiRequest(void) { return S3fsMultiCurl::max_multireq; }

    S3fsMultiSuccessCallback SetSuccessCallback(S3fsMultiSuccessCallback function);
    S3fsMultiRetryCallback SetRetryCallback(S3fsMultiRetryCallback function);
    bool Clear(void);
    bool SetS3fsCurlObject(S3fsCurl* s3fscurl);
    int Request(void);
};

//----------------------------------------------
// Utility Functions
//----------------------------------------------
std::string GetContentMD5(int fd);
unsigned char* md5hexsum(int fd, off_t start = 0, ssize_t size = -1);
std::string md5sum(int fd, off_t start = 0, ssize_t size = -1);
struct curl_slist* curl_slist_sort_insert(struct curl_slist* list, const char* data);
bool MakeUrlResource(const char* realpath, std::string& resourcepath, std::string& url);

#endif // S3FS_CURL_H_
