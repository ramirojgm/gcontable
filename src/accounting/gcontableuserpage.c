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

struct _GContableUserPagePrivate
{
    GtkWidget * view,
	      * scroll;
};

G_DEFINE_TYPE_WITH_PRIVATE(GContableUserPage,gcontable_user_page,GCONTABLE_TYPE_PAGE)

static void
gcontable_user_page_init(GContableUserPage * self)
{
  self->priv = gcontable_user_page_get_instance_private(self);
  self->priv->scroll = gtk_scrolled_window_new(NULL,NULL);
  self->priv->view = gtk_widget_new(GTK_TYPE_TREE_VIEW,
				    "visible",TRUE,
				    NULL);

  gtk_container_add(GTK_CONTAINER(self),self->priv->scroll);
  gtk_container_add(GTK_CONTAINER(self->priv->scroll),self->priv->view);

  gtk_widget_show_all(self->priv->scroll);
}

static void
gcontable_user_page_class_init(GContableUserPageClass * klass)
{
  GCONTABLE_PAGE_CLASS(klass)->group = "Configuration";
  GCONTABLE_PAGE_CLASS(klass)->icon_name = "system-users-symbolic";
  GCONTABLE_PAGE_CLASS(klass)->title = "Users";
  GCONTABLE_PAGE_CLASS(klass)->description = "List all users";
}
