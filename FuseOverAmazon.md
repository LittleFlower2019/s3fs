FUSE-based file system backed by Amazon S3

**Announcement: This s3fs project is moved to "s3fs-fuse" on GitHub December 15th, 2013.
https://github.com/s3fs-fuse/s3fs-fuse**

**Announcement: Please submit usage/support questions to the [Issues](http://code.google.com/p/s3fs/issues/list) area instead of as a comment to this Wiki page. Thanks!**

# What's New #

  * [s3fs-1.74.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.74.tar.gz) ([r478](https://code.google.com/p/s3fs/source/detail?r=478) - [r498](https://code.google.com/p/s3fs/source/detail?r=498)) fixes bugs(memory leak etc), IAM role, changes utility mode.
  * [s3fs-1.73.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.73.tar.gz) ([r465](https://code.google.com/p/s3fs/source/detail?r=465) - [r474](https://code.google.com/p/s3fs/source/detail?r=474)) fixes bugs, adds ahbe\_conf option and samples.
  * [s3fs-1.72.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.72.tar.gz) ([r448](https://code.google.com/p/s3fs/source/detail?r=448) - [r461](https://code.google.com/p/s3fs/source/detail?r=461)) fixes bugs, adds multireq\_max/parallel\_count/fd\_page\_size option. And big change for performance.
  * [s3fs-1.71.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.71.tar.gz) ([r438](https://code.google.com/p/s3fs/source/detail?r=438),[r439](https://code.google.com/p/s3fs/source/detail?r=439),[r440](https://code.google.com/p/s3fs/source/detail?r=440),[r441](https://code.google.com/p/s3fs/source/detail?r=441),[r442](https://code.google.com/p/s3fs/source/detail?r=442),[r444](https://code.google.com/p/s3fs/source/detail?r=444)) fixes bugs, adds use\_sse option.
  * [s3fs-1.70.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.70.tar.gz) ([r428](https://code.google.com/p/s3fs/source/detail?r=428),[r429](https://code.google.com/p/s3fs/source/detail?r=429),[r430](https://code.google.com/p/s3fs/source/detail?r=430),[r431](https://code.google.com/p/s3fs/source/detail?r=431),[r432](https://code.google.com/p/s3fs/source/detail?r=432),[r433](https://code.google.com/p/s3fs/source/detail?r=433),[r434](https://code.google.com/p/s3fs/source/detail?r=434)) fixes bugs, adds nodnscache option.
  * [s3fs-1.69.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.69.tar.gz) ([r418](https://code.google.com/p/s3fs/source/detail?r=418),[r419](https://code.google.com/p/s3fs/source/detail?r=419),[r420](https://code.google.com/p/s3fs/source/detail?r=420),[r421](https://code.google.com/p/s3fs/source/detail?r=421),[r422](https://code.google.com/p/s3fs/source/detail?r=422),[r423](https://code.google.com/p/s3fs/source/detail?r=423),[r424](https://code.google.com/p/s3fs/source/detail?r=424)) fixes bugs, supports enable\_noobj\_cache/enable\_content\_md5/uid/gid options, supports s3sync objects.
  * [s3fs-1.68.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.68.tar.gz) ([r408](https://code.google.com/p/s3fs/source/detail?r=408),[r409](https://code.google.com/p/s3fs/source/detail?r=409),[r410](https://code.google.com/p/s3fs/source/detail?r=410),[r411](https://code.google.com/p/s3fs/source/detail?r=411),[r412](https://code.google.com/p/s3fs/source/detail?r=412),[r413](https://code.google.com/p/s3fs/source/detail?r=413),[r414](https://code.google.com/p/s3fs/source/detail?r=414)) fixes bugs, supports nonempty option, supports other S3 clients.
  * [s3fs-1.67.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.67.tar.gz) ([r405](https://code.google.com/p/s3fs/source/detail?r=405)) fixes bugs, fixes memory leak.
  * [s3fs-1.66.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.66.tar.gz) ([r400](https://code.google.com/p/s3fs/source/detail?r=400)) changes cache for performance, automatically checks xmlns, cleanups code, fixes bugs.
  * [s3fs-1.65.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.65.tar.gz) ([r396](https://code.google.com/p/s3fs/source/detail?r=396), [r397](https://code.google.com/p/s3fs/source/detail?r=397)) changes file layout of  source codes, fixes a bug([r397](https://code.google.com/p/s3fs/source/detail?r=397)).
  * [s3fs-1.64.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.64.tar.gz) ([r392](https://code.google.com/p/s3fs/source/detail?r=392), [r393](https://code.google.com/p/s3fs/source/detail?r=393)) changes dir object logic for compatibility, adds a option, fixes some bugs.
  * [s3fs-1.63.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.63.tar.gz) ([r390](https://code.google.com/p/s3fs/source/detail?r=390)) adds stat\_cache\_expire option, enable permission checking, fixes some bugs.
  * [s3fs-1.62.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.62.tar.gz) ([r384](https://code.google.com/p/s3fs/source/detail?r=384), [r385](https://code.google.com/p/s3fs/source/detail?r=385)) fixes some bugs(memory leak, unclosed fd, etc), adds a few options for compatibility.
  * [s3fs-1.61.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.61.tar.gz) ([r368](https://code.google.com/p/s3fs/source/detail?r=368)) Maintenance release for 1.60, fixes a compile-time bug in 32bit systems and a memory leak in md5sum().
  * [s3fs-1.60.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.60.tar.gz) ([r364](https://code.google.com/p/s3fs/source/detail?r=364)) Support for files > 5GB. Fixed several memory leaks.
  * [s3fs-1.35.tar.gz](http://s3fs.googlecode.com/files/s3fs-1.35.tar.gz) ([r306](https://code.google.com/p/s3fs/source/detail?r=306)) Fixed issue with redirects and multipart upload works for files up to 64GB

# Overview #

s3fs is a [FUSE](http://fuse.sourceforge.net) filesystem that allows you to mount an Amazon S3 bucket as a local filesystem. It stores files natively and transparently in S3 (i.e., you can use other programs to access the same files). Maximum file size=64GB (limited by s3fs, not Amazon).

s3fs is stable and is being used in number of production environments, e.g., rsync backup to s3.

**Important Note:** Your kernel **must** support FUSE, kernels earlier than 2.6.18-164 may not have FUSE support (see [issue #140](https://code.google.com/p/s3fs/issues/detail?id=#140)).  Virtual Private Servers (VPS) may not have FUSE support compiled into their kernels.

To use it:

  1. Get an Amazon S3 account! http://aws.amazon.com/s3/
  1. Download, compile and install. (see InstallationNotes)
  1. Specify your Security Credentials (Access Key ID & Secret Access Key) by one of the following methods:
  * using the passwd\_file command line option
  * setting the AWSACCESSKEYID and AWSSECRETACCESSKEY environment variables
  * using a .passwd-s3fs file in your home directory
  * using the system-wide /etc/passwd-s3fs file
  1. do this:

```
/usr/bin/s3fs mybucket /mnt
```

That's it! the contents of your amazon bucket "mybucket" should now be accessible read/write in /mnt<br>
<br>
The s3fs password file has this format (use this format if you have only one set of credentials):<br>
<br>
<code>accessKeyId:secretAccessKey</code>

If have more than one set of credentials, then you can have default credentials as specified above, but this syntax will be recognized as well:<br>
<br>
<code>bucketName:accessKeyId:secretAccessKey</code>

If you want to use IAM account, you can get AccessKey/secretAccessKey pair on AWS S3 console.<br>
<br>
<b>Note: The credentials files may not have lax permissions as this creates a security hole.</b> ~/.passwd-s3fs may not have others/group permissions and /etc/passwd-s3fs may not have others permissions. Set permissions on these files accordingly:<br>
<pre><code>% chmod 600 ~/.passwd-s3fs<br>
% sudo chmod 640 /etc/passwd-s3fs<br>
</code></pre>

s3fs supports mode (e.g., chmod), mtime (e.g, touch) and uid/gid (chown). s3fs stores the values in x-amz-meta custom meta headers, <del>and as such does "brute-force" re-uploads of s3 objects if/when mode and/or mtime changes.</del> and uses x-amz-copy-source to efficiently change them.<br>
<br>
s3fs has a caching mechanism: You can enable local file caching to minimize downloads, e.g., :<br>
<pre><code>/usr/bin/s3fs mybucket /mnt -ouse_cache=/tmp<br>
</code></pre>

Hosting a cvsroot on s3 works! Although you probably don't really want to do it in practice. E.g., cvs -d /s3/cvsroot init. Incredibly, mysqld also works, although I doube you really wanna do that in practice! =)<br>
<br>
<del>Using rsync with an s3 volume as the destination doesn't quite work because of timestamp issues. s3fs does not (yet) support changing timestamps on files. I mean, it will work, as in it will copy files, but, the timestamps will just be current timestamps (rsync will complain about not being able to set timestamps but will continue).</del>

s3fs works with rsync! (as of svn 43) <del>Due to the way FUSE works and s3fs' "brute-force" support of mode (chmod) and mtime (touch), upon first sync, files are downloaded/uploaded more than once (because rsync does (a) chmod (b) touch and (c) rename), however, subsequent rsyncs are pretty much as fast as can be. If that's too much downloading/downloading for ya then try using the "use_cache" option to enable the local file cache... it will definitely minimize the number of downloads.</del> as of <a href='https://code.google.com/p/s3fs/source/detail?r=152'>r152</a> s3fs uses x-amz-copy-source for efficient update of mode, mtime and uid/gid.<br>
<br>
s3fs will retry s3 transactions on certain error conditions. The default retry count is 2, i.e., s3fs will make 2 retries per s3 transaction (for a total of 3 attempts: 1st attempt + 2 retries) before giving up. You can set the retry count by using the "retries" option, e.g., "-oretries=2".<br>
<br>
<h1>Options</h1>

<ul><li><b>default_acl</b> (default="private")<br>
<ul><li>the default canned acl to apply to all written s3 objects, e.g., "public-read"<br>
<ul><li>see <a href='http://docs.amazonwebservices.com/AmazonS3/2006-03-01/index.html?RESTAccessPolicy.html'>http://docs.amazonwebservices.com/AmazonS3/2006-03-01/index.html?RESTAccessPolicy.html</a> "Canned Access Policies" for the full list of canned acls<br>
</li></ul></li><li>any created files will have this canned acl<br>
</li><li>any updated files will also have this canned acl applied!</li></ul></li></ul>

<ul><li><b>prefix</b> (default="") (coming soon!)<br>
<ul><li>a prefix to append to all s3 objects</li></ul></li></ul>

<ul><li><b>retries</b> (default="2")<br>
<ul><li>number of times to retry a failed s3 transaction</li></ul></li></ul>

<ul><li><b>use_cache</b> (default="" which means disabled)<br>
<ul><li>local folder to use for local file cache</li></ul></li></ul>

<ul><li><b>use_rrs</b> (default="" which means diabled)<br>
<ul><li>use Amazon's Reduced Redundancy Storage</li></ul></li></ul>

<ul><li><b>use_sse</b> (default="" which means disabled)<br>
<ul><li>use Amazon’s Server Site Encryption.</li></ul></li></ul>

<ul><li><b>passwd_file</b> (default="")<br>
<ul><li>specify the path to the password file, over-rides looking for the password in in $HOME/.passwd-s3fs and /etc/passwd-s3fs</li></ul></li></ul>

<ul><li><b>ahbe_conf</b> (default="" which means disabled)<br>
<ul><li>This option specifies the configuration file path which file is the additional HTTP header by file(object) extension.</li></ul></li></ul>

<ul><li><b>public_bucket</b> (default="" which means disabled)<br>
<ul><li>anonymously mount a public bucket when set to 1, ignores the $HOME/.passwd-s3fs and /etc/passwd-s3fs files</li></ul></li></ul>

<ul><li><b>connect_timeout</b> (default="10" seconds)<br>
<ul><li>time to wait for connection before giving up</li></ul></li></ul>

<ul><li><b>readwrite_timeout</b> (default="30" seconds)<br>
<ul><li>time to wait between read/write activity before giving up</li></ul></li></ul>

<ul><li><b>max_stat_cache_size</b> (default="10000" entries (about 4MB))<br>
<ul><li>maximum number of entries in the stat cache</li></ul></li></ul>

<ul><li><b>url</b> (default="<a href='http://s3.amazonaws.com'>http://s3.amazonaws.com</a>")<br>
<ul><li>sets the url to use to access amazon s3, e.g., if you want to use https then set url=<a href='https://s3.amazonaws.com'>https://s3.amazonaws.com</a></li></ul></li></ul>

<ul><li><b>stat_cache_expire</b> (default is no expire)<br>
<ul><li>specify expire time(seconds) for entries in the stat cache.</li></ul></li></ul>

<ul><li><b>enable_noobj_cache</b> (default is disable)<br>
<ul><li>enable cache entries for the object which does not exist.</li></ul></li></ul>

<ul><li><b>nodnscache</b>
<ul><li>s3fs is always using dns cache, this option make dns cache disable.</li></ul></li></ul>

<ul><li><b>nomultipart</b>
<ul><li>disable multipart uploads.</li></ul></li></ul>

<ul><li><b>multireq_max</b> (default="500")<br>
<ul><li>maximum number of parallel request for listing objects.</li></ul></li></ul>

<ul><li><b>parallel_count</b> (default="5")<br>
<ul><li>number of parallel request for downloading/uploading large objects. s3fs uploads large object(over 20MB) by multipart post request, and sends parallel requests. This option limits parallel request count which s3fs requests at once.</li></ul></li></ul>

<ul><li><b>fd_page_size</b> (default="52428800"(50MB))<br>
<ul><li>number of internal management page size for each file discriptor.</li></ul></li></ul>

<ul><li><b>enable_content_md5</b> (default is disable)<br>
<ul><li>verifying  uploaded  data  without  multipart by content-md5 header.</li></ul></li></ul>

<ul><li><b>noxmlns</b>
<ul><li>disable  registing  xml name space for response of ListBucketResult and ListVersionsResult etc. Default name space is looked up from "<a href='http://s3.amazonaws.com/doc/2006-03-01'>http://s3.amazonaws.com/doc/2006-03-01</a>".</li></ul></li></ul>

<ul><li><b>nocopyapi</b>
<ul><li>for  a  distributed object storage which is compatibility S3 API without PUT(copy api).  If you set this option, s3fs do not  use PUT  with  "x-amz-copy-source"(copy  api).</li></ul></li></ul>

<ul><li><b>norenameapi</b>
<ul><li>for a distributed object storage which is compatibility  S3  API without  PUT(copy  api).   This  option is a subset of nocopyapi option.</li></ul></li></ul>

<h1>Details</h1>

If enabled via "use_cache" option, s3fs automatically maintains a local cache of files in the folder specified by use_cache. Whenever s3fs needs to read or write a file on s3 it first downloads the entire file locally to the folder specified by use_cache and operates on it. When fuse release() is called, s3fs will re-upload the file to s3 if it has been changed. s3fs uses md5 checksums to minimize downloads from s3. Note: this is different from the stat cache (see below).<br>
<br>
Local file caching works by calculating and comparing md5 checksums (ETag HTTP header).<br>
<br>
The folder specified by use_cache is just a local cache. It can be deleted at any time. s3fs re-builds it on demand. Note: this directory grows unbounded and can fill up a file system dependent upon the bucket and reads to that bucket. Take precaution by using a quota system or routinely clearing the cache (or some other method).<br>
<br>
s3fs supports chmod (mode) and touch (mtime) by virtue of "x-amz-meta-mode" and "x-amz-meta-mtime" custom meta headers. <del>As well, these are supported in a brute-force manner. That is, changing any x-amz-meta headers requires re-uploading the s3 object. This is exactly what s3fs does. When changing mode or mtime, s3fs will download the s3 object, change the meta header(s) and re-upload the s3 object. Ditto for file rename.</del> as of <a href='https://code.google.com/p/s3fs/source/detail?r=149'>r149</a> s3fs uses x-amz-copy-source, this means that s3fs no longer needs to operate in a brute-force manner; much faster now (one minor performance-related corner case left to solve... /usr/bin/touch)<br>
<br>
The stat cache stores file information in memory and can improve performance. It's default setting is to store 10,000 entries which can account for about 4 MB of memory usage. When the stat cache fills up, entries with a low hit count are deleted first. The size of the stat cache is controllable with an option.<br>
<br>
s3fs uses /etc/mime.types to "guess" the "correct" content-type based on file name extension. This means that you can copy a website to s3 and serve it up directly from s3 with correct content-types. Uknown file types are assigned "application/octet-stream".<br>
<br>
<h1>Important Limitations</h1>
<h2>Eventual Consistency</h2>
Due to S3's "eventual consistency" limitations file creation can and will<br>
occasionally fail. Even after a successful create subsequent reads can fail for an<br>
indeterminate time, even after one or more successful reads. Create and read enough<br>
files and you will eventually encounter this failure. This is not a flaw in s3fs and<br>
it is not something a FUSE wrapper like s3fs can work around. The retries option does<br>
not address this issue. Your application must either tolerate or compensate for these<br>
failures, for example by retrying creates or reads. For more details,<br>
see <a href='http://code.google.com/p/s3fs/wiki/EventualConsistency'>Eventual Consistency</a>
<h2>libcurl version</h2>
s3fs runs with libcurl, then if you use libcurl with libnss, s3fs requires libcurl after version 7.21.5.<br>
If you use lbcurl(with libnss) under version 7.21.5, s3fs leaks memory.<br>
You don't mind about libcurl version when libcurl linked OpenSSL library instead of libnss.<br>
<br>
<h1>Release Notes</h1>

<ul><li><a href='http://code.google.com/p/s3fs/source/detail?r=497'>r497</a>
<ul><li>Fixed a bug(<a href='https://code.google.com/p/s3fs/issues/detail?id=389'>Issue 389</a>)<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=495'>r495</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=496'>r496</a>
<ul><li>Fixed a bug that object size is overflow on 32bit OS.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=493'>r493</a>
<ul><li>Changed utility mode and Supported removing multipart uploading object.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=491'>r491</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=492'>r492</a>
<ul><li>Fixed a bug(<a href='https://code.google.com/p/s3fs/issues/detail?id=371'>Issue 371</a> #28, #32).<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=490'>r490</a>
<ul><li>Supported IAM role(like s3fs-c).<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=489'>r489</a>
<ul><li>Fixed a bug about public_bucket.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=486'>r486</a>
<ul><li>Fixed a bug(<a href='https://code.google.com/p/s3fs/issues/detail?id=371'>Issue 371</a>).<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=483'>r483</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=484'>r484</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=487'>r487</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=488'>r488</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=493'>r493</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=494'>r494</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=495'>r495</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=498'>r498</a>
<ul><li>Fixed trifling bugs, and changed some codes.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=482'>r482</a>
<ul><li>Fixed memory leak, and changed parallel count 500 to 20 for multipart head, fixed some bugs.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=481'>r481</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=485'>r485</a>
<ul><li>Fixed a bug(<a href='https://code.google.com/p/s3fs/issues/detail?id=368'>Issue 368</a>).<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=480'>r480</a>
<ul><li>Fixed a bug(<a href='https://code.google.com/p/s3fs/issues/detail?id=321'>Issue 321</a>), and some bugs, strict checking option.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=479'>r479</a>
<ul><li>Calling curl_global_init function once, and Adds dynamic lock callback for OpenSSL.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=478'>r478</a>
<ul><li>for 32bit compiling.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=465'>r465</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=472'>r472</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=473'>r473</a>
<ul><li>Adds ahbe_conf option and samples, change mount point permission<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=466'>r466</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=467'>r467</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=468'>r468</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=470'>r470</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=471'>r471</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=474'>r474</a>
<ul><li>Fixes bugs and changes codes<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=448'>r448</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=451'>r451</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=452'>r452</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=453'>r453</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=454'>r454</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=455'>r455</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=460'>r460</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=461'>r461</a>
<ul><li>Fixes bugs and changes codes<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=449'>r449</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=456'>r456</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=457'>r457</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=458'>r458</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=459'>r459</a>
<ul><li>Changes codes for performance, and adds options(multireq_max, parallel_count, fd_page_size)<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=442'>r442</a>,  <a href='http://code.google.com/p/s3fs/source/detail?r=444'>r444</a>
<ul><li>Fixed bugs and changed codes.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=441'>r441</a>
<ul><li>Refixed a bug( <a href='https://code.google.com/p/s3fs/issues/detail?id=343'>Issue 343</a>, 235, 257, 265 )<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=440'>r440</a>
<ul><li>Fixed a bug( <a href='https://code.google.com/p/s3fs/issues/detail?id=342'>Issue 342</a> )<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=438'>r 438</a>,  <a href='http://code.google.com/p/s3fs/source/detail?r=439'>r439</a>
<ul><li>Supports SSE and adds "use_sse" option( <a href='https://code.google.com/p/s3fs/issues/detail?id=226'>Issue 226</a> ).<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=434'>r434</a>
<ul><li>Fixed a bug( <a href='https://code.google.com/p/s3fs/issues/detail?id=235'>Issue 235</a>, <a href='https://code.google.com/p/s3fs/issues/detail?id=257'>Issue 257</a>, <a href='https://code.google.com/p/s3fs/issues/detail?id=265'>Issue 265</a> )<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=432'>r432</a>
<ul><li>Fixed a bug( <a href='https://code.google.com/p/s3fs/issues/detail?id=241'>Issue 241</a> )<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=431'>r 431</a>,  <a href='http://code.google.com/p/s3fs/source/detail?r=433'>r433</a>
<ul><li>Fixed bugs<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=430'>r430</a>
<ul><li>Fixed a bug( <a href='https://code.google.com/p/s3fs/issues/detail?id=235'>Issue 235</a> )<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=429'>r429</a>
<ul><li>Fixed a bug( <a href='https://code.google.com/p/s3fs/issues/detail?id=429'>Issue 429</a> )<br>
</li><li>Added nodnscache option<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=428'>r428</a>
<ul><li>Fixed bugs( <a href='https://code.google.com/p/s3fs/issues/detail?id=340'>Issue 340</a>, etc )<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=424'>r424</a>
<ul><li>Supported uid/gid option<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=423'>r423</a>
<ul><li>Added enable_content_md5 option<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=422'>r422</a>
<ul><li>Fixes a bug(<a href='https://code.google.com/p/s3fs/issues/detail?id=31'>Issue 31</a>)<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=420'>r420</a>,<a href='http://code.google.com/p/s3fs/source/detail?r=421'>r421</a>
<ul><li>Fixes a bug(<a href='https://code.google.com/p/s3fs/issues/detail?id=291'>Issue 291</a>)<br>
</li><li>Fixes a bug(<a href='https://code.google.com/p/s3fs/issues/detail?id=240'>Issue 240</a>)<br>
</li><li>Added enable_noobj_cache option<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=418'>r418</a>,<a href='http://code.google.com/p/s3fs/source/detail?r=419'>r419</a>
<ul><li>Fixed a bug that s3fs failed to get stats when max_stat_cache_size=0.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=413'>r413</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=414'>r414</a>
<ul><li>Supports directory objects which are made by other S3 clients(<a href='https://code.google.com/p/s3fs/issues/detail?id=27'>Issue 27</a>)<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=410'>r410</a>
<ul><li>Supports "nonempty" fuse/mount option(<a href='https://code.google.com/p/s3fs/issues/detail?id=265'>Issue 265</a>)<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=409'>r409</a>
<ul><li>Fixes a bug(<a href='https://code.google.com/p/s3fs/issues/detail?id=293'>Issue 293</a>)<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=408'>r408</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=411'>r411</a>, <a href='http://code.google.com/p/s3fs/source/detail?r=412'>r412</a>
<ul><li>Fixes a bug(<a href='https://code.google.com/p/s3fs/issues/detail?id=320'>Issue 320</a>)<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=405'>r405</a>
<ul><li>Fixes a bug(Issue: 328) - <a href='http://code.google.com/p/s3fs/source/detail?r=404'>r404</a>
</li><li>Fixes a bug(Issue: 326) - <a href='http://code.google.com/p/s3fs/source/detail?r=403'>r403</a>
</li><li>Fixes memory leak. - <a href='http://code.google.com/p/s3fs/source/detail?r=403'>r403</a>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=400'>r400</a>
<ul><li>Changes stat cache, it accumulates stat information and some headers.<br>
</li><li>Changes that s3fs can decide using the xmlns url automatically.<br>
</li><li>Fixes <a href='http://code.google.com/p/s3fs/issues/detail?id=321'>Issue 321</a> "no write permission for non-root user".<br>
</li><li>Cleanup code, fixes bougs.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=397'>r397</a>
<ul><li>Fixes a bug(can not make a directory which name is same as deleted directory name)<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=396'>r396</a>
<ul><li>No changes for logic, only changes file layout of functions and valuables.<br>
</li><li>Adds s3fs_util.cpp/s3fs_util.h/common.h<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=392'>r392</a>
<ul><li>Fixes bugs(memory leak, unclosed curl handle, etc).<br>
</li><li>Changes codes for cleaning up.<br>
</li><li>Adds noreanmeapi option.<br>
</li><li>Changes object name type for directory.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=390'>r390</a>
<ul><li>Adds stat_cache_expire option<br>
</li><li>Enable file permission checking.<br>
</li><li>Recognizes normal file object which has no x-amz-meta-mode header.<br>
</li><li>Adds "." and ".." directory when the files in the directory is listed.<br>
</li><li>Fixes bugs.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=384'>r384</a>
<ul><li>Fixes bugs(memory leak, unclosed fd, etc).<br>
</li><li>The mknod is changed that it always return error,.<br>
</li><li>The symbolic file attribute changed to S_IFLNK | S_IRWXU | S_IRWXG | S_IRWXO.<br>
</li><li>Fixes the truncate function to work.<br>
</li><li>Adds noxmlns and nocopyapi option.<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=302'>r302</a>
<ul><li>fixed <a href='https://code.google.com/p/s3fs/issues/detail?id=#144'>issue #144</a> - multipart upload works for files up to 64GB<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=301'>r301</a>
<ul><li>fixed <a href='https://code.google.com/p/s3fs/issues/detail?id=#145'>issue #145</a> - data corruption on redirections<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=298'>r298</a>
<ul><li>implemented multipart upload for files > 20MB<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=289'>r289</a>
<ul><li>fixed <a href='https://code.google.com/p/s3fs/issues/detail?id=#17'>issue #17</a> - implement directory rename<br>
</li><li>fixed <a href='https://code.google.com/p/s3fs/issues/detail?id=#18'>issue #18</a> - implement create() function<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=287'>r287</a>
<ul><li>fixed <a href='https://code.google.com/p/s3fs/issues/detail?id=#6'>issue #6</a> - accounted for short write on BIO_write<br>
</li></ul></li><li><a href='http://code.google.com/p/s3fs/source/detail?r=285'>r285</a>
<ul><li>Fixed memory leak issues<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=281'>r281</a>
<ul><li>minimum version for FUSE is now 2.8.4<br>
</li><li>changed curl write-to-memory callback function<br>
</li><li>eliminated a couple of memory leaks<br>
</li><li>added more debug code<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=280'>r280</a>
<ul><li>service error codes from libcurl more appropriately<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=275'>r275</a>
<ul><li>better error messages during check_service function<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=274'>r274</a>
<ul><li>added FUSE's -s option back in<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=270'>r270</a>
<ul><li>fixed <a href='https://code.google.com/p/s3fs/issues/detail?id=#128'>issue #128</a> - problem with https on Fedora<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=269'>r269</a>
<ul><li>fixed <a href='https://code.google.com/p/s3fs/issues/detail?id=#125'>issue #125</a> - problem with https on CentOS<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=265'>r265</a>
<ul><li>https - trap bad certificate issue during service_check<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=243'>r243</a>
<ul><li>eliminate options for specifying credentials on the command line<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=241'>r241</a>
<ul><li>more error checking - if connected to the network, check for valid credentials and the bucket name is valid<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=240'>r240</a>
<ul><li>re-enable the the -f command line option (disables FUSE daemon mode)<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=235'>r235</a>
<ul><li>add debug option to send debug messages to syslog<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=233'>r233</a>
<ul><li>check for too liberal permissions on password file<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=231'>r231</a>
<ul><li>more robust error checking<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=230'>r230</a>
<ul><li>add "make check" target<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=229'>r229</a>
<ul><li>added support for multiple credentials<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=227'>r227</a>
<ul><li>basis for s3fs-1.10.tar.gz<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=217'>r217</a>
<ul><li>basis for s3fs-1.0.tar.gz<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=213'>r213</a>
<ul><li>added command line --version option<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=209'>r209</a>
<ul><li>converted to Autotools<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=203'>r203</a>
<ul><li>fail with error when bucket with upper case characters is attempted to be mounted<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=202'>r202</a>
<ul><li>fixed bug associated with url = "https://"<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=201'>r201</a>
<ul><li>rmdir now cannot delete a non-empty directory<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=200'>r200</a>
<ul><li>support for Reduced Redundancy Storage<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=198'>r198</a>
<ul><li>rsync without the --inplace option now creates the correct content-type metadata<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=197'>r197</a>
<ul><li>removed compile time warning with respect to unused function<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=195'>r195</a>
<ul><li>fixed argument ordering with initialization of fuse_operations data structure<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=166'>r166</a>
<ul><li>case-insensitive lookup of content-type from /etc/mime.types<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=152'>r152</a>
<ul><li>added support for symlinks... ln -s works!<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=151'>r151</a>
<ul><li>use /etc/mime.types<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=150'>r150</a>
<ul><li>added support for uid/gid... chown works!<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=149'>r149</a>
<ul><li>support x-amz-copy-source... rsync much faster now!<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=145'>r145</a>
<ul><li>log svn version at startup via syslog /var/log/messages<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=141'>r141</a>
<ul><li>added "url" runtime parameter<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=136'>r136</a>, <a href='https://code.google.com/p/s3fs/source/detail?r=138'>r138</a>
<ul><li>connect_timeout and readwrite_timeout<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=130'>r130</a>
<ul><li>set uid/gid to whatever getuid()/getgid() returns<br>
</li><li>log some stuff to syslog (i.e., /var/log/messages)<br>
</li><li>fixed <a href='https://code.google.com/p/s3fs/issues/detail?id=14'>issue 14</a> (local file cache bug; fixed cp, rsync, etc...)<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=117'>r117</a>
<ul><li>limit max-keys=20 (workaround for libcurl's 100% cpu issue?!?)<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=116'>r116</a>
<ul><li>added crypto locking<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=114'>r114</a>
<ul><li>curl_global_init<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=107'>r107</a>
<ul><li>use CURLOPT_NOSIGNAL<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=106'>r106</a>
<ul><li>rewind on retry<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=105'>r105</a>
<ul><li>only send x-amz-acl and x-amz-meta headers<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=101'>r101</a>, <a href='https://code.google.com/p/s3fs/source/detail?r=102'>r102</a>, <a href='https://code.google.com/p/s3fs/source/detail?r=103'>r103</a>
<ul><li>fixed curl_multi_timeout bug (found on mac)<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=99'>r99</a>
<ul><li>added "default_acl" option<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=92'>r92</a>
<ul><li>parallel-ized readdir(): getting a directory listing is now a lot faster<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=88'>r88</a>
<ul><li>removed 10s read timeout that should not have been introduced<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=72'>r72</a> 2008-02-18<br>
<ul><li>use_cache now takes path to local file cache folder, e.g., /usr/bin/s3fs mybucket /s3 -ouse_cache=/tmp<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=66'>r66</a> 2008-02-18<br>
<ul><li>local file cache is back! however, it is disabled by default... use "use_cache" option, <del>e.g., /usr/bin/s3fs mybucket /s3 -ouse_cache=1</del>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=57'>r57</a> 2008-02-18<br>
<ul><li>a few bug fixes:<br>
<ul><li>touch x-amz-meta-mtime in flush()<br>
</li><li>use INFILE_LARGE (libcurl) (found on fc5/ppc)<br>
</li></ul></li><li>tidyup<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=43'>r43</a> 2008-02-17<br>
<ul><li>mode (i.e., chmod), mtime and deep rename! rsync now works!<br>
</li><li>temporarily disabled local file cache (might not bring it back!)<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=28'>r28</a> 2007-12-15<br>
<ul><li>retry on 500 server error<br>
</li></ul></li><li><a href='https://code.google.com/p/s3fs/source/detail?r=27'>r27</a> 2007-12-15<br>
<ul><li>file-based (instead of memory-based)<br>
<ul><li>this means that s3fs will no longer allocate large memory buffers when writing files to s3</li></ul></li></ul></li></ul>

<h1>FAQ</h1>

<ul><li>What do I need to know?<br>
<ul><li>/usr/bin/s3fs<br>
</li><li>/var/log/messages<br>
</li><li>an entry in /etc/fstab (optional - <b>requires fuse to be fully installed</b> <a href='https://code.google.com/p/s3fs/issues/detail?id=#115'>issue #115</a>)<br>
</li><li>the file $HOME/.passwd-s3fs or /etc/passwd-s3fs (optional)<br>
</li><li>the folder specified by use_cache (optional) a local file cache automatically maintained by s3fs, enabled with "use_cache" option, e.g., -ouse_cache=/tmp<br>
</li><li>the file /etc/mime.types<br>
<ul><li>map of file extensions to Content-types<br>
</li><li>on Fedora /etc/mime.types comes from mailcap, so, you can either (a) create this file yourself or (b) do a yum install mailcap<br>
</li></ul></li><li>stores files natively and transparently in amazon s3; you can access files with other tools, e.g., jets3t<br>
</li></ul></li><li>Why do I get "Input/output error"?<br>
<ul><li>Does the bucket exist?<br>
</li><li>Are your credentials correct?<br>
</li><li>Is your local clock within 15 minutes of Amazon's? (RequestTimeTooSkewed)<br>
</li></ul></li><li>How do I troubleshoot it?<br>
<ul><li>tail -f /var/log/messages<br>
</li><li>Use the fuse -f switch, e.g., /usr/bin/s3fs -f my_bucket /mnt<br>
</li></ul></li><li><del>Why do I see "Operation cannot be completed because you do not have sufficient privliges"</del>
<ul><li><del>you'll see this when a program you're using (e.g., tar, rsync) is trying to explicitly set the modification time of a file. s3fs currently does not support this. Contents of the file are ok, its just that the timestamp might not be what you're expecting. I'm working to fix this.</del> fixed in svn 43!<br>
</li></ul></li><li>Its still not working!<br>
<ul><li>Try updating your version of libcurl: I've used 7.16 and 7.17<br>
</li></ul></li><li>Q: when I mount a bucket only the current user can see it; other users cannot; how do I allow other users to see it? ...why do I see "d?????????" in directory listings? A: use 'allow_other'<br>
<ul><li>/usr/bin/s3fs -o allow_other mybucket /mnt<br>
</li><li>or from /etc/fstab: s3fs#mybucket /mnt fuse allow_other 0 0<br>
</li></ul></li><li>Q: How does the local file cache work?<br>
<ul><li>A: It is unbounded! if you want you can use a cron job (e.g., script in /etc/cron.daily) to periodically purge "~/.s3fs"... due to the reference nature of posix file systems a periodic purge will <b>not</b> interfere with the normal operation of s3fs local file cache...!<br>
</li></ul></li><li><del>Q: How do I change the location of the "~/.s3fs" folder?</del>
<ul><li><del>A: you don't (for now)... use a softlink</del> -ouse_cache option <b>is</b> the path used for local file cache! e.g., /usr/bin/s3fs mybucket /s3 -ouse_cache=/tmp<br>
</li></ul></li><li>Q: s3fs uses x-amz-meta custom meta headers... will s3fs clobber any existing x-amz-meta custom header headers?<br>
<ul><li>A: No!<br>
</li></ul></li><li>Q: I renamed a folder and now all of the files in that folder are gone! What the?!?<br>
<ul><li>A: Rename it back and your files will be back. s3fs does not support deep directory rename and doesn't check for it either.</li></ul></li></ul>

<h1>Limitations</h1>
<ul><li><del>no permissions checking</del> fixed in svn <a href='https://code.google.com/p/s3fs/source/detail?r=390'>r390</a>
</li><li><del>no chmod support: all files are 0775</del> fixed in svn 43!<br>
</li><li><del>no symlink support</del> added in <a href='https://code.google.com/p/s3fs/source/detail?r=152'>r152</a>
</li><li><del>rename is "supported" by virtue of returning EXDEV from rename()</del> fixed in svn 43! svn 43 supports deep renaming of files<br>
</li><li><del>when writing files: requires as much memory as the size of the largest file you're writing (this can be easily fixed)</del> fixed (svn 27) you should now be able to copy, say, a 2GB file to s3 without having s3fs malloc 2GB of memory!<br>
</li><li><del>deep rename directories?!?</del>
</li><li>server side copies are not possible - due to how FUSE orchestrates the low level instructions, the file must first be downloaded to the client and then uploaded to the new location</li></ul>

<h1>ToDo</h1>

<ul><li><del>support brute-force rename</del> fixed in svn 43<br>
</li><li><del>get symlinks working?</del> added in <a href='https://code.google.com/p/s3fs/source/detail?r=152'>r152</a>
<ul><li><del>this would bog down performance: would have to do deep getattr() for every single object</del> already doing this in svn 43... its not too bad!<br>
</li></ul></li><li><del>make install target</del>
</li><li><del>get "-h" help working</del>
</li><li><del>handle utime so that rsync works!</del> fixed in svn 43!<br>
<ul><li><del>probably a bad idea after all...</del>
</li><li><del>actually don't think it can be done: can't specify arbitrary create-time for PUT</del>
</li></ul></li><li><del>chmod support... acl</del>
</li><li>permissions: using -o allow_other, even though files are owned by root 0755, another use can make changes<br>
<ul><li>use default_permissions option?!?<br>
</li></ul></li><li>better error logging for troubleshooting, <del>e.g., syslog...</del>
<ul><li>need to parse response on, say, 403 and 404 errors, etc... and log 'em!<br>
</li></ul></li><li><del>use temporary file for flush() and then stream it to amazon</del></li></ul>

<h1>See Also</h1>

Here is a list of other Amazon S3 filesystems:<br>
<br>
<ul><li>ElasticDrive<br>
</li><li>PersistentFS<br>
</li><li><a href='https://fedorahosted.org/s3fs/'>https://fedorahosted.org/s3fs/</a>
</li><li><a href='http://code.google.com/p/s3fs-fuse/'>http://code.google.com/p/s3fs-fuse/</a>
</li><li><a href='http://s3backer.googlecode.com'>http://s3backer.googlecode.com</a>
</li><li><a href='http://code.google.com/p/s3ql'>http://code.google.com/p/s3ql</a>