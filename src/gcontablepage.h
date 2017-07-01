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

#ifndef GCONTABLE_PAGE_H
#define GCONTABLE_PAGE_H

typedef struct _GContablePagePrivate GContablePagePrivate;

#define GCONTABLE_TYPE_PAGE 	(gcontable_page_get_type())
G_DECLARE_DERIVABLE_TYPE(GContablePage,gcontable_page,GCONTABLE,PAGE,GtkBin)

struct _GContablePageClass
{
	GtkBinClass parent_class;
	/* virtual */
	gboolean (*request_close)(GContablePage * page);
};

GType		gcontable_page_get_type(void);

GtkWidget *	gcontable_page_new(void);

GtkWidget *	gcontable_page_get_label_area(GContablePage * page);

void		gcontable_page_set_label(GContablePage * page,const gchar * label);

const gchar *	gcontable_page_get_label(GContablePage * page);

#endif
