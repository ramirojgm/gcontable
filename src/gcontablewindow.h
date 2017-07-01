/* Copyright (C) 2017 Ramiro Jose Garcia Moraga
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GCONTABLE_WINDOW_H
#define GCONTABLE_WINDOW_H

typedef struct _GContableWindowPrivate GContableWindowPrivate;
typedef struct _GContablePageEntry GContablePageEntry;

#define GCONTABLE_TYPE_WINDOW	(gcontable_window_get_type())
G_DECLARE_FINAL_TYPE(GContableWindow,gcontable_window,GCONTABLE,WINDOW,GtkApplicationWindow)

struct _GContableWindowClass
{
	GtkApplicationWindowClass parent_class;
};

struct _GContableWindow
{
	GtkApplicationWindow parent_instance;
	GContableWindowPrivate * priv;
};

GType		gcontable_window_get_type(void);

GtkWidget * 	gcontable_window_new();

void		gcontable_window_append_page(GContableWindow * window,GtkWidget * widget);

void		gcontable_window_append_remove(GContableWindow * window,GtkWidget * widget);

#endif
