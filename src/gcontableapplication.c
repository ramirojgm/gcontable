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


#include <gcontable.h>

struct _GContableApplicationPrivate
{
  gpointer padding[12];
};

G_DEFINE_TYPE_WITH_PRIVATE(GContableApplication,gcontable_application,GTK_TYPE_APPLICATION)

static void
gcontable_application_init(GContableApplication * self)
{
  self->priv = gcontable_application_get_instance_private(self);
}

GContableApplication *
gcontable_application_new()
{
  return GCONTABLE_APPLICATION(
      g_object_new(GCONTABLE_TYPE_APPLICATION,
		    "application-id","org.gnome.desktop.gcontable",
		    "flags",G_APPLICATION_FLAGS_NONE,
		    NULL)
  );
}

static void
gcontable_application_activate(GApplication * app)
{
  GContableWindow * window = gcontable_window_new();
  gtk_widget_show(GTK_WIDGET(window));
  gtk_application_add_window(GTK_APPLICATION(app),GTK_WINDOW(window));
}

static void
gcontable_application_class_init(GContableApplicationClass * klass)
{
  G_APPLICATION_CLASS(klass)->activate = gcontable_application_activate;
}

