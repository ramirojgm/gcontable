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

struct _GContableVoucherPagePrivate
{
    GtkWidget * view,
	      * box,
	      * toolbar,
	      * scroll;
    GtkListStore * store;
};

enum
{
    GCONTABLE_COLUMN_VOUCHER_ID,
    GCONTABLE_COLUMN_VOUCHER_DATE,
    GCONTABLE_COLUMN_VOUCHER_REFERENCE,
    GCONTABLE_COLUMN_VOUCHER_DEBIT,
    GCONTABLE_COLUMN_VOUCHER_CREDIT,
    GCONTABLE_COLUMN_VOUCHER_N
};

G_DEFINE_TYPE_WITH_PRIVATE(GContableVoucherPage,gcontable_voucher_page,GCONTABLE_TYPE_PAGE)

static void
gcontable_voucher_update_data(GContableVoucherPage * self)
{

}

static void
gcontable_voucher_page_init(GContableVoucherPage * self)
{
  self->priv = gcontable_voucher_page_get_instance_private(self);
  self->priv->store  = gtk_list_store_new(GCONTABLE_COLUMN_VOUCHER_N,
					  G_TYPE_INT,
					  G_TYPE_STRING,
					  G_TYPE_STRING,
					  G_TYPE_DOUBLE,
					  G_TYPE_DOUBLE);

  self->priv->box = gtk_box_new(GTK_ORIENTATION_VERTICAL,0);
  self->priv->scroll = gtk_scrolled_window_new(NULL,NULL);
  self->priv->view = gtk_tree_view_new_with_model(GTK_TREE_MODEL(self->priv->store));
  self->priv->toolbar = gcontable_toolbar_new();

  gtk_box_pack_start(GTK_BOX(self->priv->box),self->priv->toolbar,FALSE,FALSE,0);
  gtk_box_pack_end(GTK_BOX(self->priv->box),self->priv->scroll,TRUE,TRUE,0);

  gtk_container_add(GTK_CONTAINER(self),self->priv->box);
  gtk_container_add(GTK_CONTAINER(self->priv->scroll),self->priv->view);

  gtk_widget_show_all(self->priv->box);

  gcontable_voucher_update_data(self);
}

static void
gcontable_voucher_page_class_init(GContableVoucherPageClass * klass)
{
  GCONTABLE_PAGE_CLASS(klass)->group = "Account";
  GCONTABLE_PAGE_CLASS(klass)->icon_name = "emblem-documents-symbolic";
  GCONTABLE_PAGE_CLASS(klass)->title = "Voucher";
  GCONTABLE_PAGE_CLASS(klass)->description = "List all vouchers";
}
