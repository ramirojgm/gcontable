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

#ifndef GUI_GCONTABLEAPPLICATION_H_
#define GUI_GCONTABLEAPPLICATION_H_

#include <gtk/gtk.h>

#define GCONTABLE_TYPE_APPLICATION 	(gcontable_application_get_type())
G_DECLARE_DERIVABLE_TYPE(GContableApplication,gcontable_application,GCONTABLE,APPLICATION,GtkApplication)

struct _GContableApplicationClass
{
	GtkApplicationClass parent_class;
};

GType						gcontable_application_get_type(void);
GContableApplication *		gcontable_application_new(void);

#endif /* GUI_GCONTABLEAPPLICATION_H_ */
