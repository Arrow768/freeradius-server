/**
 * @cond skip
 * vim:syntax=doxygen
 * @endcond
 *
 *
@mainpage

@section main_intro Introduction

FreeRADIUS is a high-performance modular RADIUS server, supporting PAP, CHAP,
EAP (including EAP-TLS, EAP-TTLS, EAP-PEAP with EAP-MSCHAP) and a very flexible
configuration model, including conditional request processing, querying of
LDAP and SQL databases, exection of external scripts and more.

FreeRADIUS uses a thread pool to serve requests. Each request is processed
synchronously, and processing passes through a series of stages, and a list
of modules in each stage.

@section main_toc Table of Contents

- @subpage server_doc "1. Core server APIs"
- @subpage module_doc "2. Server modules"
- @subpage client_doc "3. Client APIs"

@section main_branches GIT Branch

@subsection branch_40x 4.0.x feature branch

@note Submit pull requests for new features or modules against this branch.

@code
git clone git@github.com:FreeRADIUS/freeradius-server.git
cd freeradius-server
git fetch origin v4.0.x:v4.0.x
git checkout v4.0.x
@endcode
- Web: http://github.com/FreeRADIUS/freeradius-server/tree/v4.0.x

@subsection branch_32x 3.2.x stable + feature branch

@code
git clone git@github.com:FreeRADIUS/freeradius-server.git
cd freeradius-server
git fetch origin v3.2.x:v3.2.x
git checkout v3.2.x
@endcode
- Web: http://github.com/FreeRADIUS/freeradius-server/tree/v3.2.x

@subsection branch_30x 3.0.x stable branch

@note This branch is now permanently feature frozen. Only security
      fixes will be applied to it.  New features or modules should be
      submitted against the v3.2.x branch, or the v4.0.x branch.
@code
git clone git@github.com:FreeRADIUS/freeradius-server.git
cd freeradius-server
git fetch origin v3.0.x:v3.0.x
git checkout v3.0.x
@endcode
- Web: http://github.com/FreeRADIUS/freeradius-server/tree/v3.0.x

@subsection branch_2xx 2.x.x EOL branch

@note This branch is now permanently end of life. No bug fixes or
      security fixes will be performed for this branch.

@code
git clone git@github.com:FreeRADIUS/freeradius-server.git
cd freeradius-server
git fetch origin v2.x.x:v2.x.x
git checkout v2.x.x
@endcode
- Web: http://github.com/FreeRADIUS/freeradius-server/tree/v2.x.x

@subsection branch_1xx 1.1.x EOL branch

@note This branch is now permanently end of life. No bug fixes or
      security fixes will be performed for this branch.

@code
git clone git@github.com:FreeRADIUS/freeradius-server.git
cd freeradius-server
git fetch origin v2.x.x:v2.x.x
git checkout v2.x.x
@endcode
- Web: http://github.com/FreeRADIUS/freeradius-server/tree/v1.1.x

@section main_website Website

- http://www.freeradius.org

@section mailinglist Mailing lists

@subsection main_list FreeRADIUS-users

This list is for users of the server

@code
freeradius-users@lists.freeradius.org
@endcode
- Archives: http://lists.freeradius.org/pipermail/freeradius-users/
- List info: http://freeradius.org/list/users.html

@subsection dev_list FreeRADIUS-devel

This list is for development of the server, including patches, and
new features. PLEASE DO NOT post questions related to the operation
of the server here - use the "users" list. Most of the developers
read both, and will answer your questions there if they have the time.

@code
freeradius-devel@lists.freeradius.org
@endcode
- Archives: http://lists.freeradius.org/pipermail/freeradius-devel/
- List info: http://freeradius.org/list/devel.html

*/
