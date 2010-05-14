/** @file

  Layout

  @section license License

  Licensed to the Apache Software Foundation (ASF) under one
  or more contributor license agreements.  See the NOTICE file
  distributed with this work for additional information
  regarding copyright ownership.  The ASF licenses this file
  to you under the Apache License, Version 2.0 (the
  "License"); you may not use this file except in compliance
  with the License.  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  @section details Details

  Part of the utils library which contains classes that use multiple
  components of the IO-Core to implement some useful functionality. The
  classes also serve as good examples of how to use the IO-Core.

 */

#ifndef _I_Layout_h
#define _I_Layout_h


/**
  The Layout is a simple place holder for the distribution layout.

 */
struct Layout
{
  char *prefix;
  char *exec_prefix;
  char *bindir;
  char *sbindir;
  char *sysconfdir;
  char *datadir;
  char *includedir;
  char *libdir;
  char *libexecdir;
  char *localstatedir;
  char *sharedstatedir;
  char *mandir;
  char *infodir;

  Layout(const char *prefix = 0);
   ~Layout();

  /**
   Return file path relative to Layout->prefix
   Memory is allocated, so use free() when no longer needed

  */
  char *relative(const char *file);
};

/**
  Creates a Layout Object with the given prefix.  If no
  prefix is given, the prefix defaults to the one specified
  at the compile time.

 */
void create_default_layout(const char *prefix = 0);

/**
  Returns the Layout object created by create_default_layout().
 */
Layout *default_layout();

#endif
