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


struct _GContableWindowPrivate
{
  GtkWidget * header,
	    * body,
	    * body_stack,
	    * sidebar,
	    * notebook,
  //login
	    * login_view,
	    * login_body,
	    * user_nick,
	    * user_password,
	    * login_button;

  gpointer padding[12];
};

G_DEFINE_TYPE_WITH_PRIVATE(GContableWindow,gcontable_window,GTK_TYPE_APPLICATION_WINDOW)


GContableWindow *
gcontable_window_new(void)
{
  return GCONTABLE_WINDOW(g_object_new(GCONTABLE_TYPE_WINDOW,NULL));
}

static void
gcontable_window_on_login_activated(GContableWindow * win)
{
  gtk_stack_set_visible_child_name(GTK_STACK(win->priv->body_stack),"body");

}

static void
gcontable_window_on_sidebar_row_activated(GContableWindow * win,
					  GtkListBoxRow *row)
{
    GType page_type = GPOINTER_TO_INT(g_object_get_data(G_OBJECT(row),"page-type"));

    GList * childs = gtk_container_get_children(GTK_CONTAINER(win->priv->notebook));
    gint page_index = -1;
    for(GList * child_iter = g_list_first(childs); child_iter; child_iter = g_list_next(child_iter))
      {
	if(G_TYPE_FROM_INSTANCE(child_iter->data) == page_type)
	  {
	      page_index = gtk_notebook_page_num(GTK_NOTEBOOK(win->priv->notebook),GTK_WIDGET(child_iter->data));
	      break;
	  }
      }

    if(page_index == -1)
      {
	GContablePage * page = GCONTABLE_PAGE(gtk_widget_new(page_type,"visible",TRUE,NULL));
	page_index = gtk_notebook_append_page(GTK_NOTEBOOK(win->priv->notebook),GTK_WIDGET(page),gcontable_page_get_label_area(page));
	gtk_notebook_set_tab_reorderable(GTK_NOTEBOOK(win->priv->notebook),GTK_WIDGET(page),TRUE);
      }
    gtk_notebook_set_current_page(GTK_NOTEBOOK(win->priv->notebook),page_index);
}


static void
gcontable_window_sidebar_init(GContableWindow * self)
{
  GCONTABLE_TYPE_USER_PAGE;
  GCONTABLE_TYPE_ACCOUNT_PAGE;
  GCONTABLE_TYPE_SPECIAL_ACCOUNT_PAGE;
  GCONTABLE_TYPE_VOUCHER_PAGE;

  guint n_page_types = 0;
  g_autofree GType * page_types = g_type_children(GCONTABLE_TYPE_PAGE,&n_page_types);


  for(guint page_index = 0; page_index < n_page_types; page_index ++)
    {
      GType page_type = page_types[page_index];
      GContablePageClass * page_class = GCONTABLE_PAGE_CLASS(g_type_class_ref(page_type));

      g_autofree gchar * description = g_strdup_printf("%s\n<small>%s</small>",
						  page_class->title,
						  page_class->description);

      GtkWidget * list_row = gtk_widget_new(GTK_TYPE_LIST_BOX_ROW,
					    "visible",TRUE,
					    NULL),

		* icon = gtk_image_new_from_icon_name(page_class->icon_name,GTK_ICON_SIZE_LARGE_TOOLBAR),

		* label = gtk_widget_new(GTK_TYPE_LABEL,
					 "label",description,
					 "use-markup",TRUE,
					 "xalign",0,
					 NULL),

		* box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL,5);

      gtk_box_pack_start(GTK_BOX(box),icon,FALSE,FALSE,0);
      gtk_box_pack_end(GTK_BOX(box),label,TRUE,TRUE,0);
      gtk_container_set_border_width(GTK_CONTAINER(box),5);

      gtk_container_add(GTK_CONTAINER(list_row),box);
      gtk_widget_show_all(list_row);

      gtk_list_box_insert(GTK_LIST_BOX(self->priv->sidebar),list_row,-1);

      g_object_set_data(G_OBJECT(list_row),"page-type",GINT_TO_POINTER(page_type));
    }
}

static void
gcontable_window_init(GContableWindow * self)
{
  self->priv = gcontable_window_get_instance_private(self);
  GContableWindowPrivate * priv = self->priv;

  //header
  priv->header = gtk_widget_new(GTK_TYPE_HEADER_BAR,
				      "title","GContable",
				      "subtitle","GNOME Contable application",
				      "show-close-button", TRUE,
				      "visible",TRUE,
				      NULL);
  //self
  gtk_window_set_titlebar(GTK_WINDOW(self),priv->header);

  //body
  priv->body = gtk_widget_new(GTK_TYPE_PANED,
			      "orientation",GTK_ORIENTATION_HORIZONTAL,
			      "position",200,
			      "visible",TRUE,
			      NULL);

  //sidebar
  priv->sidebar = gtk_widget_new(GTK_TYPE_LIST_BOX,
				 "visible",TRUE,
				 NULL);
  //notebook
  priv->notebook = gtk_widget_new(GTK_TYPE_NOTEBOOK,
				  "show-border",FALSE,
				  "scrollable",TRUE,
				  "visible",TRUE,
				  NULL);
  //body_stack
  priv->body_stack = gtk_widget_new(GTK_TYPE_STACK,
				    "transition-type",GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT_RIGHT,
				    "transition-duration",300,
				    "visible",TRUE,
				    NULL);

  //login_body
  priv->login_body = gtk_widget_new(GTK_TYPE_BOX,
				    "orientation",GTK_ORIENTATION_VERTICAL,
				    "margin-start",20,
				    "margin-end",20,
				    "margin-top",30,
				    "margin-bottom",30,
				    "visible",TRUE,
				    NULL);
  //login_view
  priv->login_view = gtk_widget_new(GTK_TYPE_VIEWPORT,
				    "vexpand",FALSE,
				    "hexpand",FALSE,
				    "valign",GTK_ALIGN_CENTER,
				    "halign",GTK_ALIGN_CENTER,
				    "width-request",250,
				    "visible",TRUE,
				    NULL);

  //user_nick
  priv->user_nick = gtk_widget_new(GTK_TYPE_ENTRY,
				   "text","",
				   "can-default",FALSE,
				   "has-focus",FALSE,
				   "placeholder-text","Nick",
				   "visible",TRUE,
				   NULL);
  //user_password
  priv->user_password = gtk_widget_new(GTK_TYPE_ENTRY,
				 "text","",
				 "can-default",FALSE,
				 "has-focus",FALSE,
				 "placeholder-text","Password",
				 "visibility",FALSE,
				 "visible",TRUE,
				 NULL);
  //login_button
  priv->login_button = gtk_widget_new(GTK_TYPE_BUTTON,
				      "can-default",TRUE,
				      "can-focus",TRUE,
				      "has-focus",TRUE,
				      "label","Login",
				      "visible",TRUE,
				      NULL);


  gtk_paned_pack1(GTK_PANED(priv->body),priv->sidebar,FALSE,FALSE);
  gtk_paned_pack2(GTK_PANED(priv->body),priv->notebook,TRUE,TRUE);

  gtk_box_pack_start(GTK_BOX(priv->login_body),priv->user_nick,FALSE,FALSE,0);
  gtk_box_pack_start(GTK_BOX(priv->login_body),priv->user_password,FALSE,FALSE,0);
  gtk_box_pack_end(GTK_BOX(priv->login_body),priv->login_button,FALSE,FALSE,0);

  gtk_style_context_add_class(gtk_widget_get_style_context(priv->login_view),"view");
  gtk_style_context_add_class(gtk_widget_get_style_context(priv->login_body),"linked");
  gtk_style_context_add_class(gtk_widget_get_style_context(priv->notebook),"background");
  gtk_style_context_add_class(gtk_widget_get_style_context(priv->login_button),"suggested-action");
  gtk_style_context_add_class(gtk_widget_get_style_context(priv->sidebar),"sidebar");

  gtk_container_add(GTK_CONTAINER(self),priv->body_stack);
  gtk_container_add(GTK_CONTAINER(priv->login_view),priv->login_body);
  gtk_stack_add_named(GTK_STACK(priv->body_stack),priv->login_view,"login");
  gtk_stack_add_named(GTK_STACK(priv->body_stack),priv->body,"body");

  g_signal_connect_swapped(priv->login_button,"clicked",G_CALLBACK(gcontable_window_on_login_activated),self);
  g_signal_connect_swapped(priv->user_nick,"activate",G_CALLBACK(gcontable_window_on_login_activated),self);
  g_signal_connect_swapped(priv->user_password,"activate",G_CALLBACK(gcontable_window_on_login_activated),self);
  g_signal_connect_swapped(priv->sidebar,"row-activated",G_CALLBACK(gcontable_window_on_sidebar_row_activated),self);

  gcontable_window_sidebar_init(self);
}

static void
gcontable_window_class_init(GContableWindowClass * klass)
{

}



