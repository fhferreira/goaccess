/**
 * Copyright (C) 2009-2014 by Gerardo Orellana <goaccess@prosoftcorp.com>
 * GoAccess - An Ncurses apache weblog analyzer & interactive viewer
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * A copy of the GNU General Public License is attached to this
 * source distribution for its full text.
 *
 * Visit http://goaccess.prosoftcorp.com for new releases.
 */

#if HAVE_CONFIG_H
#include <config.h>
#endif

#ifndef JSON_H_INCLUDED
#define JSON_H_INCLUDED

#define TAB "\t\t\t\t\t\t\t\t\t\t\t"
#define NL "\n\n\n"

#include "parser.h"

char *get_json (GLog * logger, GHolder * holder);

void output_json (GLog * logger, GHolder * holder);
void pjson (FILE * fp, const char *fmt, ...);
void print_close_block_attr (FILE * fp, int iisp, char comma);
void print_close_panel_attr (FILE * fp, int sp, char comma);
void print_open_block_attr (FILE * fp, int iisp);
void print_open_panel_attr (FILE * fp, const char *attr, int sp);

#endif
