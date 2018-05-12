/* Copyright (C) 2018 Ramiro Jose Garcia Moraga
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

struct _GContablePagePrivate
{
	GtkWidget
		* label_area,
		* label_widget,
		* button_close,
		* image_close,
		* image_icon;
};


G_DEFINE_TYPE_WITH_PRIVATE(GContablePage,gcontable_page,GTK_TYPE_BIN)

static gboolean
_gcontable_page_request_close(GContablePage * page)
{
	return TRUE;
}

static void
_gcontable_page_on_button_close_clicked(GContablePage * self,GtkButton * button_close)
{
  GContablePageClass * klass = GCONTABLE_PAGE_GET_CLASS(self);
  gboolean remove = TRUE;

  if(klass->request_close)
    {
      remove = klass->request_close(self);
    }

  if(remove)
    {
      GtkNotebook * notebook = GTK_NOTEBOOK(gtk_widget_get_parent(GTK_WIDGET(self)));
      if(notebook && GTK_IS_NOTEBOOK(notebook))
	{
	  gtk_notebook_detach_tab(notebook,GTK_WIDGET(self));
	}
    }
}

static void
gcontable_page_init(GContablePage * self)
{
  GContablePagePrivate *
  priv = gcontable_page_get_instance_private(self);

  GContablePageClass * klass = GCONTABLE_PAGE_GET_CLASS (self);

  //init
  priv->label_area = gtk_box_new(GTK_ORIENTATION_HORIZONTAL,0);
  priv->image_icon = gtk_image_new();
  priv->label_widget = gtk_label_new(klass->title);
  priv->button_close = gtk_button_new();
  priv->image_close = gtk_image_new_from_icon_name("window-close-symbolic",GTK_ICON_SIZE_MENU);

  //image_close
  gtk_container_add(GTK_CONTAINER(priv->button_close),priv->image_close);

  //image_icon
  gtk_box_pack_start(GTK_BOX(priv->label_area),priv->image_icon,TRUE,TRUE,5);

  //label_widget
  gtk_box_pack_start(GTK_BOX(priv->label_area),priv->label_widget,TRUE,TRUE,5);

  //button_close
  gtk_button_set_relief(GTK_BUTTON(priv->button_close),GTK_RELIEF_NONE);
  gtk_box_pack_end(GTK_BOX(priv->label_area),priv->button_close,FALSE,FALSE,0);

  //showing
  gtk_widget_show_all(priv->label_area);

  //connet signals
  g_signal_connect_swapped(priv->button_close,"clicked",G_CALLBACK(_gcontable_page_on_button_close_clicked),(gpointer)self);
}

static void
gcontable_page_constructed(GObject * object)
{
  GContablePageClass * klass = GCONTABLE_PAGE_GET_CLASS (object);

  gcontable_page_set_label(GCONTABLE_PAGE(object),klass->title);
  gcontable_page_set_icon_name(GCONTABLE_PAGE(object),klass->icon_name);
}

static void
gcontable_page_class_init(GContablePageClass * klass)
{
  klass->request_close = _gcontable_page_request_close;
  klass->title = "Untitle";
  klass->description = "";
  klass->icon_name = "system-run-symbolic";
  G_OBJECT_CLASS(klass)->constructed = gcontable_page_constructed;
}

GtkWidget *
gcontable_page_new()
{
  return GTK_WIDGET(g_object_new(GCONTABLE_TYPE_PAGE,NULL));
}

GtkWidget *
gcontable_page_get_label_area(GContablePage * page)
{
  g_return_val_if_fail(GCONTABLE_IS_PAGE(page),NULL);
  GContablePagePrivate *
  priv = gcontable_page_get_instance_private(page);
  return priv->label_area;
}

void
gcontable_page_set_label(GContablePage * page,const gchar * label)
{
  g_return_if_fail(GCONTABLE_IS_PAGE(page));
  GContablePagePrivate *
  priv = gcontable_page_get_instance_private(page);
  gtk_label_set_label(GTK_LABEL(priv->label_widget),label);
}

void
gcontable_page_set_icon_name(GContablePage * page,const gchar * icon_name)
{
  g_return_if_fail(GCONTABLE_IS_PAGE(page));
  GContablePagePrivate *
  priv = gcontable_page_get_instance_private(page);
  gtk_image_set_from_icon_name(GTK_IMAGE(priv->image_icon),icon_name,GTK_ICON_SIZE_MENU);
}


const gchar *
gcontable_page_get_label(GContablePage * page)
{
  g_return_val_if_fail(GCONTABLE_IS_PAGE(page),NULL);
  GContablePagePrivate *
  priv = gcontable_page_get_instance_private(page);
  return gtk_label_get_label(GTK_LABEL(priv->label_widget));
}
