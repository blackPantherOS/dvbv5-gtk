/*
* Copyright 2020 Stepan Perun
* This program is free software.
*
* License: Gnu General Public License GPL-2
* file:///usr/share/common-licenses/GPL-2
* http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
*/

#ifndef FILE_H
#define FILE_H

#include <gtk/gtk.h>

char * uri_get_path ( const char * );
char * dir_open  ( const char *, GtkWindow * );
char * file_open ( const char *, GtkEntry *, GtkWindow * );
char * file_save ( const char *, GtkEntry *, GtkWindow * );

#endif // FILE_H
