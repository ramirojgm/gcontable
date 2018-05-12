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

struct _GContableToolbarPrivate
{
  gint buttons;

  GtkWidget * position_box,
	    * action_box,
	    * box,
	    * view_box,
	    * search_bar,
	    * search_entry,
	    * button_first,
	    * button_previous,
	    * button_next,
	    * button_last,
	    * button_add,
	    * button_remove,
	    * button_edit,
	    * button_update,
	    * button_search;
};

G_DEFINE_TYPE_WITH_PRIVATE(GContableToolbar,gcontable_toolbar,GTK_TYPE_BOX)

GtkWidget *
gcontable_toolbar_new(void)
{
  return gtk_widget_new(GCONTABLE_TYPE_TOOLBAR,NULL);
}

void
gcontable_toolbar_set_buttons(GContableToolbar * toolbar,
			      gint buttons)
{

}

gint
gcontable_toolbar_get_buttons(GContableToolbar * toolbar)
{
  return toolbar->priv->buttons;
}


void
gcontable_toolbar_add_button(GContableToolbar * toolbar,
			     gint button)
{}

static void
gcontable_toolbar_update_buttons(GContableToolbar * toolbar)
{

}

static GtkWidget *
gcontable_toolbar_button_new(const gchar * icon_name,
			     const gchar * label,
			     gboolean toggle)
{
  GtkWidget * button;
  if(toggle)
    button = gtk_toggle_button_new();
  else
    button = gtk_button_new();

  gtk_container_add(GTK_CONTAINER(button),
		    gtk_image_new_from_icon_name(icon_name,GTK_ICON_SIZE_BUTTON));
  return button;
}

static void
gcontable_toolbar_init(GContableToolbar * self)
{
  GContableToolbarPrivate * priv = gcontable_toolbar_get_instance_private(self);
  self->priv = priv;

  priv->box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL,5);
  priv->position_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL,0);
  priv->action_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL,0);

  gtk_container_set_border_width(GTK_CONTAINER(priv->position_box),3);
  gtk_container_set_border_width(GTK_CONTAINER(priv->action_box),3);

  gtk_style_context_add_class(
      gtk_widget_get_style_context(priv->position_box),
      "linked");

  gtk_style_context_add_class(
      gtk_widget_get_style_context(priv->action_box),
      "linked");

  priv->view_box = gtk_viewport_new(NULL,NULL);

  gtk_viewport_set_shadow_type(GTK_VIEWPORT(priv->view_box),
			       GTK_SHADOW_NONE);

  gtk_style_context_add_class(
      gtk_widget_get_style_context(priv->view_box),
      "location-bar");

  priv->button_first = gcontable_toolbar_button_new("go-first-symbolic","First",FALSE);
  priv->button_previous = gcontable_toolbar_button_new("go-previous-symbolic","Previous",FALSE);
  priv->button_next = gcontable_toolbar_button_new("go-next-symbolic","Next",FALSE);
  priv->button_last = gcontable_toolbar_button_new("go-last-symbolic","Last",FALSE);

  priv->button_add = gcontable_toolbar_button_new("document-new-symbolic","Add",FALSE);
  priv->button_remove = gcontable_toolbar_button_new("user-trash-symbolic","Remove",FALSE);
  priv->button_edit = gcontable_toolbar_button_new("document-edit-symbolic","Edit",FALSE);
  priv->button_update = gcontable_toolbar_button_new("view-refresh-symbolic","Update",FALSE);
  priv->button_search = gcontable_toolbar_button_new("edit-find-symbolic","Search",TRUE);

  gtk_box_pack_start(GTK_BOX(priv->position_box),priv->button_first,FALSE,FALSE,0);
  gtk_box_pack_start(GTK_BOX(priv->position_box),priv->button_previous,FALSE,FALSE,0);
  gtk_box_pack_start(GTK_BOX(priv->position_box),priv->button_next,FALSE,FALSE,0);
  gtk_box_pack_start(GTK_BOX(priv->position_box),priv->button_last,FALSE,FALSE,0);

  gtk_box_pack_start(GTK_BOX(priv->action_box),priv->button_add,FALSE,FALSE,0);
  gtk_box_pack_start(GTK_BOX(priv->action_box),priv->button_remove,FALSE,FALSE,0);
  gtk_box_pack_start(GTK_BOX(priv->action_box),priv->button_edit,FALSE,FALSE,0);
  gtk_box_pack_start(GTK_BOX(priv->action_box),priv->button_update,FALSE,FALSE,0);
  gtk_box_pack_start(GTK_BOX(priv->action_box),priv->button_search,FALSE,FALSE,0);

  priv->search_bar = gtk_search_bar_new();
  priv->search_entry = gtk_search_entry_new();

  gtk_widget_set_size_request(priv->search_entry,250,-1);

  gtk_container_add(GTK_CONTAINER(priv->search_bar),priv->search_entry);

  g_object_bind_property(priv->button_search,
			 "active",
			 priv->search_bar,
			 "search-mode-enabled",
			 G_BINDING_BIDIRECTIONAL);

  gtk_search_bar_connect_entry(GTK_SEARCH_BAR(priv->search_bar),
			       GTK_ENTRY(priv->search_entry));

  gtk_orientable_set_orientation(GTK_ORIENTABLE(self),
				 GTK_ORIENTATION_VERTICAL);

  gtk_container_add(GTK_CONTAINER(priv->view_box),priv->box);

  gtk_box_pack_start(GTK_BOX(priv->box),priv->position_box,FALSE,FALSE,0);
  gtk_box_pack_start(GTK_BOX(priv->box),priv->action_box,FALSE,FALSE,0);

  gtk_box_pack_start(GTK_BOX(self),priv->view_box,TRUE,TRUE,0);
  gtk_box_pack_end(GTK_BOX(self),priv->search_bar,TRUE,TRUE,0);

  gtk_widget_show_all(priv->view_box);
  gtk_widget_show_all(priv->search_bar);

  gcontable_toolbar_update_buttons(self);
}

static void
gcontable_toolbar_class_init(GContableToolbarClass * klass)
{

}
