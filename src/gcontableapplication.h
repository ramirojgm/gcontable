/*
	Copyright (C) 2018 Ramiro Jose Garcia Moraga

	This file is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This file is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with the this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GCONTABLEAPPLICATION_H_
#define GCONTABLEAPPLICATION_H_

#define GCONTABLE_TYPE_APPLICATION	(gcontable_application_get_type())
G_DECLARE_FINAL_TYPE(GContableApplication,gcontable_application,GCONTABLE,APPLICATION,GtkApplication)

typedef struct _GContableApplicationPrivate GContableApplicationPrivate;

struct _GContableApplicationClass
{
  GtkApplicationClass parent_class;
};

struct _GContableApplication
{
  GtkApplication parent_instance;
  GContableApplicationPrivate * priv;
};

G_BEGIN_DECLS

GLIB_AVAILABLE_IN_2_54
GType			gcontable_application_get_type(void);

GLIB_AVAILABLE_IN_2_54
GContableApplication * 	gcontable_application_new(void);


G_END_DECLS

#endif /* GCONTABLEAPPLICATION_H_ */
