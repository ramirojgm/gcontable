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


#include "gcontablewindow.h"

typedef struct {
	GtkHeaderBar *			headerbar;
	GtkTreeView *			place_widget;
	GtkIconView *			icon_widget;
	GtkTreeStore *			main_store;
	GtkTreeModelFilter * 	place_store;
	GtkTreeModelFilter * 	icon_store;
	GtkTreeIter				root_iter;
	GtkSearchBar *			icon_search_bar;
	GtkSearchBar *			place_search_bar;
	GtkToggleButton *		search_button;
	GQueue *				place_history;

}GContableWindowPrivate;

enum
{
	GCONTABLE_MAIN_STORE_ICON_NAME ,
	GCONTABLE_MAIN_STORE_TITLE,
	GCONTABLE_MAIN_STORE_NODE
};

G_DEFINE_TYPE_WITH_PRIVATE(GContableWindow,gcontable_window,GTK_TYPE_APPLICATION_WINDOW)

static void
gcontable_window_load(GContableWindow * self)
{
	GContableWindowPrivate
	* priv = gcontable_window_get_instance_private(self);
	gtk_tree_store_append(priv->main_store,&(priv->root_iter),NULL);
	gtk_tree_store_set(priv->main_store,&(priv->root_iter),GCONTABLE_MAIN_STORE_ICON_NAME,"folder",GCONTABLE_MAIN_STORE_TITLE,"Raiz",-1);
	GtkTreePath
	*path = gtk_tree_model_get_path(GTK_TREE_MODEL(priv->main_store), &(priv->root_iter));
	priv->icon_store = GTK_TREE_MODEL_FILTER(gtk_tree_model_filter_new(GTK_TREE_MODEL(priv->main_store),path));
	gtk_icon_view_set_model(priv->icon_widget,GTK_TREE_MODEL(priv->icon_store));
	gtk_tree_path_free(path);
	GtkTreeIter naturaleze;
	gtk_tree_store_append(priv->main_store,&(naturaleze),&(priv->root_iter));
	gtk_tree_store_set(priv->main_store,&(naturaleze),GCONTABLE_MAIN_STORE_ICON_NAME,"folder",GCONTABLE_MAIN_STORE_TITLE,"Activo",-1);
	gtk_tree_store_append(priv->main_store,&(naturaleze),&(priv->root_iter));
	gtk_tree_store_set(priv->main_store,&(naturaleze),GCONTABLE_MAIN_STORE_ICON_NAME,"folder",GCONTABLE_MAIN_STORE_TITLE,"Pasivo",-1);
	gtk_tree_store_append(priv->main_store,&(naturaleze),&(priv->root_iter));
	gtk_tree_store_set(priv->main_store,&(naturaleze),GCONTABLE_MAIN_STORE_ICON_NAME,"folder",GCONTABLE_MAIN_STORE_TITLE,"Capital",-1);

	g_queue_clear(priv->place_history);
}

static void
gcontable_window_init(GContableWindow * self)
{
	gtk_widget_init_template(GTK_WIDGET(self));
	GContableWindowPrivate
	* priv = gcontable_window_get_instance_private(self);
	//initialize
	priv->place_history = g_queue_new();
	//binding
	g_object_bind_property(priv->search_button,"active",priv->icon_search_bar,"search-mode-enabled",G_BINDING_BIDIRECTIONAL);
	//g_object_bind_property(priv->search_button,"active",priv->place_search_bar,"search-mode-enabled",G_BINDING_DEFAULT);
	gcontable_window_load(self);

}



static void
gcontable_window_class_init(GContableWindowClass * klass)
{
	gtk_widget_class_set_template_from_resource(GTK_WIDGET_CLASS(klass),"/gcontable/gui/gcontablewindow.ui");
	gtk_widget_class_bind_template_child_private(GTK_WIDGET_CLASS(klass),GContableWindow,place_widget);
	gtk_widget_class_bind_template_child_private(GTK_WIDGET_CLASS(klass),GContableWindow,icon_widget);
	gtk_widget_class_bind_template_child_private(GTK_WIDGET_CLASS(klass),GContableWindow,main_store);
	gtk_widget_class_bind_template_child_private(GTK_WIDGET_CLASS(klass),GContableWindow,icon_search_bar);
	gtk_widget_class_bind_template_child_private(GTK_WIDGET_CLASS(klass),GContableWindow,place_search_bar);
	gtk_widget_class_bind_template_child_private(GTK_WIDGET_CLASS(klass),GContableWindow,search_button);
}

GContableWindow *
gcontable_window_new()
{
	return GCONTABLE_WINDOW(g_object_new(GCONTABLE_TYPE_WINDOW,NULL));
}
