# F.A.Q. #

## subheading 1 ##

**Are there restrictions on bucket names?**

Yes. Upper case characters are not supported by s3fs even though allowable by AWS. See [issue #98](https://code.google.com/p/s3fs/issues/detail?id=#98) and [issue #126](https://code.google.com/p/s3fs/issues/detail?id=#126)

**Is s3fs compatible with other S3 clients?**

No. This mainly has to do with how directories are represented -- each client has adopted its own method. Another incompatibility is with how use client utilized the metadata associated with the file -- permissions, ownership, modification times are likely to be incoherent. In other words, if you create files with one client (e.g. s3fox, jungledisk, jets3t, ...) it probably will not be seen in the s3fs mount and vice-versa.

## subheading 2 ##

## subheading 3 ##