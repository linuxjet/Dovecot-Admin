/*
DCA
=======================================================================
$Author: jamespet $
$LastChangedDate: 2008-01-14 14:20:22 -0600 (Mon, 14 Jan 2008) $
$Rev: 476 $
=======================================================================
Copyright (C) 2008 James D. Peterson <James.Peterson@linuxjet.com>

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

#ifndef ALIAS_IO_HH
#define ALIAS_IO_HH

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <globals.h>
#include <utils.h>
#include <alias.h>
#include <log.h>

bool	alias_create(ALIAS *alias, const char *domain);
bool	alias_remove(ALIAS *alias, const char *domain);
void	alias_get_forward(char *file, ALIAS *alias, const char *domain);
bool	alias_create_forward(ALIAS *alias, const char *domain);
bool	alias_update_forward(const char *file, ALIAS *alias, const char *domain);
void	alias_get_whitelist(char *file, ALIAS *alias, const char *domain);
bool	alias_create_whitelist(ALIAS *alias, const char *domain);
bool	alias_update_whitelist(const char *file, ALIAS *alias, const char *domain);

bool	alias_exists(const char *alias, const char *domain);
void	alias_list_create(const char *domain);

#endif
