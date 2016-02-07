# Introduction #

Rather than rehash what has been published before on this subject, please read and **_understand_** the following material:

  * [A Good Explaination of Eventual Consistency](http://shlomoswidler.com/2009/12/read-after-write-consistency-in-amazon.html)
  * [Issue 61: Eventual Consistency : Creating many small files fails](http://code.google.com/p/s3fs/issues/detail?id=61)

**For the lazy** : After creation of a file, it may not be immediately available for any subsequent file operation, s3fs may return HTTP 404 (File not found) errors.


# Mitigation #

  * Use a US-West or EU bucket - higher cost.  Resolves the "read-after-write" consistency issue, but not other consistency issues like "read-after-delete" or "read-after-update"
  * Understand that this condition exists and deal with it -- **don't have the expectations of s3fs as you would of other filesystems** (e.g. you might have to run your rsync again)