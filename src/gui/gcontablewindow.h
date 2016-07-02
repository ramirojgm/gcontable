/*
	Copyright (C) 2016 Ramiro Jose Garcia Moraga

	This file is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.

	This file is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with the this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GUI_GCONTABLEWINDOW_H_
#define GUI_GCONTABLEWINDOW_H_

#include <gtk/gtk.h>

#define GCONTABLE_TYPE_WINDOW		(gcontable_window_get_type())

G_DECLARE_DERIVABLE_TYPE(GContableWindow,gcontable_window,GCONTABLE,WINDOW,GtkApplicationWindow)

struct _GContableWindowClass
{
	GtkApplicationWindowClass parent_class;
};


GType						gcontable_window_get_type(void);
GContableWindow *			gcontable_window_new(void);



#endif /* GUI_GCONTABLEWINDOW_H_ */
