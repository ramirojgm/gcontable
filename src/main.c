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

static void
activate (GtkApplication *app,
          gpointer        user_data)
{
  GtkWidget * window = gcontable_window_new (),
			* page = gcontable_page_new();

  gtk_application_add_window(app,GTK_WINDOW(window));
  gcontable_page_set_label(GCONTABLE_PAGE(page),"Nueva pagina");
  gcontable_window_append_page (GCONTABLE_WINDOW(window), page);
  gtk_widget_show (window);
}

int main(int   argc,
         char *argv[])
{
  g_autoptr(GtkApplication) app = NULL;
  int status;

  app = gtk_application_new ("org.gnome.gcontable", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  return status;
}
