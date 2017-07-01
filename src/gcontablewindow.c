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


#include "gcontable.h"

struct _GContableWindowPrivate
{
	GtkWidget
		* notebook,
		* box,
		* headerbar,
		* menu_button,
		* menu_revealer,
		* menu_box,
		* menu_list_box,
		* menu_search_entry;
};

G_DEFINE_TYPE_WITH_PRIVATE(GContableWindow,gcontable_window,GTK_TYPE_APPLICATION_WINDOW)

//signal
static void
_gcontable_window_on_menu_button_toggled(GContableWindow * self,GtkToggleButton * button)
{
	gtk_revealer_set_reveal_child(GTK_REVEALER(self->priv->menu_revealer),gtk_toggle_button_get_active(button));
}


static void
gcontable_window_init(GContableWindow * self)
{
	self->priv = gcontable_window_get_instance_private(self);
	//init
	self->priv->notebook = gtk_notebook_new();
	self->priv->box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL,0);
	self->priv->headerbar = gtk_header_bar_new();
	self->priv->menu_box = gtk_box_new(GTK_ORIENTATION_VERTICAL,0);
	self->priv->menu_button = gtk_toggle_button_new();
	self->priv->menu_search_entry = gtk_search_entry_new();
	self->priv->menu_list_box = gtk_list_box_new();
	self->priv->menu_revealer = gtk_revealer_new();

	//headerbar
	gtk_header_bar_set_title(GTK_HEADER_BAR(self->priv->headerbar),"GContable");
	gtk_header_bar_set_show_close_button(GTK_HEADER_BAR(self->priv->headerbar),TRUE);
	gtk_window_set_titlebar(GTK_WINDOW(self),self->priv->headerbar);

	//menu_button
	gtk_container_add(GTK_CONTAINER(self->priv->menu_button),gtk_image_new_from_icon_name("open-menu-symbolic",GTK_ICON_SIZE_BUTTON));
	gtk_header_bar_pack_start(GTK_HEADER_BAR (self->priv->headerbar),self->priv->menu_button);

	//menu_revealer
	gtk_box_pack_start(GTK_BOX(self->priv->box),self->priv->menu_revealer,FALSE,FALSE,0);
	gtk_box_pack_start(GTK_BOX(self->priv->box),gtk_separator_new(GTK_ORIENTATION_VERTICAL),FALSE,FALSE,0);
	gtk_container_add(GTK_CONTAINER (self->priv->menu_revealer),self->priv->menu_box);
	gtk_revealer_set_transition_type(GTK_REVEALER(self->priv->menu_revealer),GTK_REVEALER_TRANSITION_TYPE_SLIDE_RIGHT);
	gtk_revealer_set_transition_duration(GTK_REVEALER(self->priv->menu_revealer),500);

	//menu_search_entry
	gtk_entry_set_has_frame(GTK_ENTRY(self->priv->menu_search_entry),FALSE);
	gtk_widget_set_margin_start(self->priv->menu_search_entry,5);
	gtk_widget_set_margin_end(self->priv->menu_search_entry,5);
	gtk_entry_set_placeholder_text(GTK_ENTRY(self->priv->menu_search_entry),"Buscar");
	gtk_box_pack_start(GTK_BOX(self->priv->menu_box),self->priv->menu_search_entry,FALSE,FALSE,5);
	gtk_box_pack_start(GTK_BOX(self->priv->menu_box),gtk_separator_new(GTK_ORIENTATION_HORIZONTAL),FALSE,FALSE,0);

	//notebook
	gtk_notebook_set_show_border(GTK_NOTEBOOK(self->priv->notebook),FALSE);
	gtk_box_pack_end(GTK_BOX(self->priv->box),self->priv->notebook,TRUE,TRUE,0);

	//menu_list_box
	gtk_box_pack_end(GTK_BOX(self->priv->menu_box),self->priv->menu_list_box,TRUE,TRUE,0);

	//box
	gtk_style_context_add_class(gtk_widget_get_style_context(self->priv->box),"view");
	gtk_container_add(GTK_CONTAINER(self),self->priv->box);

	//connet signals
	g_signal_connect_swapped(self->priv->menu_button,"toggled",G_CALLBACK(_gcontable_window_on_menu_button_toggled),self);

	//show
	gtk_widget_show_all(self->priv->box);
	gtk_widget_show_all(self->priv->headerbar);
}

static void
gcontable_window_class_init(GContableWindowClass * klass)
{

}

GtkWidget *
gcontable_window_new()
{
	return GTK_WIDGET(g_object_new(GCONTABLE_TYPE_WINDOW,NULL));
}

void
gcontable_window_append_page(GContableWindow * window,GtkWidget * page)
{
	g_return_if_fail(GCONTABLE_IS_WINDOW(window));
	g_return_if_fail(GCONTABLE_IS_PAGE(page));
	gint new_page_num = gtk_notebook_append_page(GTK_NOTEBOOK(window->priv->notebook), page,gcontable_page_get_label_area (GCONTABLE_PAGE(page)));
	gtk_widget_show(page);
	gtk_notebook_set_tab_reorderable(GTK_NOTEBOOK(window->priv->notebook),page,TRUE);
	gtk_notebook_set_current_page(GTK_NOTEBOOK(window->priv->notebook),new_page_num);
}

void
gcontable_window_append_remove(GContableWindow * window,GtkWidget * page)
{
	g_return_if_fail(GCONTABLE_IS_WINDOW(window));
	g_return_if_fail(GCONTABLE_IS_PAGE(page));
}

void
gcontable_window_add_page_entries(GContableWindow * window,
																	const gchar * group_title,
																	const GContablePageEntry ** entries)
{

}
