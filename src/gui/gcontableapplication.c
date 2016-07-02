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


#include "gcontableapplication.h"
#include "gcontablewindow.h"

G_DEFINE_TYPE(GContableApplication,gcontable_application,GTK_TYPE_APPLICATION)

void
_gcontable_application_activate(GApplication * object);

static void
gcontable_application_init(GContableApplication * self)
{

}

static void
gcontable_application_class_init(GContableApplicationClass * klass)
{
	G_APPLICATION_CLASS(klass)->activate = _gcontable_application_activate;
}

GContableApplication
* gcontable_application_new(void)
{
	GContableApplication * self = GCONTABLE_APPLICATION(g_object_new(GCONTABLE_TYPE_APPLICATION,"application-id","org.desktop.gcontable",NULL));
	return self;
}

void
_gcontable_application_activate(GApplication * object)
{

	GContableWindow
	* window = gcontable_window_new();
	gtk_application_add_window(GTK_APPLICATION(object),GTK_WINDOW(window));
	gtk_widget_show(GTK_WIDGET(window));
	G_APPLICATION_CLASS(gcontable_application_parent_class)->activate(object);
}
