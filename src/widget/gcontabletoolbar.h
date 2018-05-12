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

#ifndef GCONTABLETOOLBAR_H_
#define GCONTABLETOOLBAR_H_

#define GCONTABLE_TYPE_TOOLBAR		(gcontable_toolbar_get_type())
G_DECLARE_FINAL_TYPE(GContableToolbar,gcontable_toolbar,GCONTABLE,TOOLBAR,GtkBox)

typedef struct _GContableToolbarPrivate GContableToolbarPrivate;
typedef enum _GContableToolbarButtons GContableToolbarButtons;

struct _GContableToolbarClass
{
  GtkBoxClass parent_class;

  void (*move)(GContableToolbar * toolbar,
		GtkTreeIter * iter);

  void (*add)(GContableToolbar * toolbar,
	      GtkTreeIter * iter);

  void (*remove)(GContableToolbar * toolbar,
		  GtkTreeIter * iter);

  void (*edit)(GContableToolbar * toolbar,
		GtkTreeIter * iter);

  void (*update)(GContableToolbar * toolbar);

  void (*search)(GContableToolbar * toolbar,
		  GtkTreeIter * iter,
		  const gchar * search_text);
};

struct _GContableToolbar
{
  GtkBox parent_instance;

  /* private */
  GContableToolbarPrivate * priv;
};

enum _GContableToolbarButtons
{
  GCONTABLE_TOOLBAR_BUTTON_FIRST = 1 << 1,
  GCONTABLE_TOOLBAR_BUTTON_PREVIOUS = 1 << 2,
  GCONTABLE_TOOLBAR_BUTTON_NEXT = 1 << 3,
  GCONTABLE_TOOLBAR_BUTTON_LAST = 1 << 4,
  GCONTABLE_TOOLBAR_BUTTON_ADD = 1 << 5,
  GCONTABLE_TOOLBAR_BUTTON_REMOVE = 1 << 6,
  GCONTABLE_TOOLBAR_BUTTON_EDIT = 1 << 7,
  GCONTABLE_TOOLBAR_BUTTON_UPDATE = 1 << 8,
  GCONTABLE_TOOLBAR_BUTTON_SEARCH = 1 << 9
};

G_BEGIN_DECLS

GLIB_AVAILABLE_IN_ALL
GType	 	gcontable_toolbar_get_type(void);

GLIB_AVAILABLE_IN_ALL
GtkWidget *	gcontable_toolbar_new(void);

GLIB_AVAILABLE_IN_ALL
void		gcontable_toolbar_set_buttons(GContableToolbar * toolbar,
					      gint buttons);

GLIB_AVAILABLE_IN_ALL
gint		gcontable_toolbar_get_buttons(GContableToolbar * toolbar);

GLIB_AVAILABLE_IN_ALL
void		gcontable_toolbar_add_button(GContableToolbar * toolbar,
					     gint button);

G_END_DECLS

#endif /* GCONTABLETOOLBAR_H_ */
