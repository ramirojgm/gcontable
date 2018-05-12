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

#ifndef GCONTABLEWEBCONTEXT_H_
#define GCONTABLEWEBCONTEXT_H_

#define GCONTABLE_WEB_ERROR		(gcontable_web_error_)

#define GCONTABLE_TYPE_WEBCONTEXT	(gcontable_web_context_get_type())
G_DECLARE_FINAL_TYPE(GContableWebContext,gcontable_web_context,GCONTABLE,WEB_CONTEXT,GObject)

typedef struct _GContableWebContextPrivate GContableWebContextPrivate;
typedef struct _GContableWebResult GContableWebResult;
typedef enum _GContableWebContextErrorEnum GContableWebContextErrorEnum;

struct _GContableWebContextClass
{
  GObjectClass parent_class;

};

struct _GContableWebContext
{
  GObject	parent_instance;

  /* private */
  GContableWebContextPrivate * priv;
};


enum _GContableWebErrorEnum
{
  GCONTABLE_WEB_ERROR_UNAUTHORIZED,
  GCONTABLE_WEB_ERROR_CONNECTION,
  GCONTABLE_WEB_ERROR_SERVER_SIDE,
  GCONTABLE_WEB_ERROR_TIMEOUT,
  GCONTABLE_WEB_ERROR_BAD_RESULT
};


GQuark	gcontable_web_error_quark(void);


GContableWebContext * gcontable_web_context_new(GInetAddress * address,
						const gchar * user,
						const gchar * password);

GContableWebResult *  gcontable_web_context_submit(GContableWebContext * context,
						  const gchar * url,
						  GObject * data,
						  GError ** error);


gboolean 	gcontable_web_result_is_empty(GContableWebResult * result);

gpointer 	gcontable_web_result_as_object(GContableWebResult * result,
					      GType object_type,
					      GError ** error);

gpointer 	gcontable_web_result_as_array(GContableWebResult * result,
					     GType object_type,
					     gsize * length,
					     GError ** error);

gint64	 	gcontable_web_result_as_int(GContableWebResult * result,
					    GError ** error);

gdouble	 	gcontable_web_result_as_double(GContableWebResult * result,
					       GError ** error);

gchar *	 	gcontable_web_result_as_string(GContableWebResult * result,
					       gsize * length,
					       GError ** error);

void		gcontable_web_result_free(GContableWebResult * result);

#endif /* GCONTABLEWEBCONTEXT_H_ */
