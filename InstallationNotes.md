# General Instructions #

## From released tarball ##

Download: http://s3fs.googlecode.com/files/s3fs-1.74.tar.gz <br>
Download SHA1 checksum: 657925015b5e9c169579ad2f81f85651e0f2beaa <br>
Download size: 199120 <br>

<ul><li>tar xvzf s3fs-1.74.tar.gz<br>
</li><li>cd s3fs-1.74/<br>
</li><li>./configure --prefix=/usr<br>
</li><li>make<br>
</li><li>make install (as root)</li></ul>


<h2>From subversion repository</h2>

<ul><li>svn checkout <a href='http://s3fs.googlecode.com/svn/trunk/'>http://s3fs.googlecode.com/svn/trunk/</a> s3fs<br>
</li><li>cd s3fs/<br>
</li><li>autoreconf --install (or ./autogen.sh)<br>
</li><li>./configure --prefix=/usr<br>
</li><li>make<br>
</li><li>make install (as root)</li></ul>


<h1>Notes for Specific Operating Systems</h1>

<h2>Debian / Ubuntu</h2>

Tested on Ubuntu 10.10<br>
<br>
Install prerequisites before compiling:<br>
<ul><li>apt-get install build-essential<br>
</li><li>apt-get install libfuse-dev<br>
</li><li>apt-get install fuse-utils<br>
</li><li>apt-get install libcurl4-openssl-dev<br>
</li><li>apt-get install libxml2-dev<br>
</li><li>apt-get install mime-support</li></ul>


<h2>Fedora / CentOS</h2>

Tested on Fedora 14 Desktop Edition and CentOS 5.5 (<b>Note:</b> on Nov 25, 2010 with s3fs version 1.16, newer versions of s3fs have not been formally tested on these platforms)<br>
<br>
<b>Note:</b> See the comment below on how to get FUSE 2.8.4 installed on CentOS 5.5<br>
<br>
Install prerequisites before compiling:<br>
<ul><li>yum install gcc<br>
</li><li>yum install libstdc++-devel<br>
</li><li>yum install gcc-c++<br>
</li><li>yum install fuse<br>
</li><li>yum install fuse-devel<br>
</li><li>yum install curl-devel<br>
</li><li>yum install libxml2-devel<br>
</li><li>yum install openssl-devel<br>
</li><li>yum install mailcap