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

  /* properties */
  const gchar * group;
  const gchar * icon_name;
  const gchar * title;
  const gchar * description;
};

G_BEGIN_DECLS

GLIB_AVAILABLE_IN_ALL
GType		gcontable_page_get_type(void);

GLIB_AVAILABLE_IN_ALL
GtkWidget *	gcontable_page_new(void);

GLIB_AVAILABLE_IN_ALL
GtkWidget *	gcontable_page_get_label_area(GContablePage * page);

GLIB_AVAILABLE_IN_ALL
void		gcontable_page_set_label(GContablePage * page,const gchar * label);

GLIB_AVAILABLE_IN_ALL
const gchar *	gcontable_page_get_label(GContablePage * page);

GLIB_AVAILABLE_IN_ALL
void 		gcontable_page_set_icon_name(GContablePage * page,const gchar * icon_name);

G_END_DECLS

#endif
