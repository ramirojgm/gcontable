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

#ifndef GCONTABLEVOUCHERPAGE_H_
#define GCONTABLEVOUCHERPAGE_H_

#define GCONTABLE_TYPE_VOUCHER_PAGE	(gcontable_voucher_page_get_type())
G_DECLARE_FINAL_TYPE(GContableVoucherPage,gcontable_voucher_page,GCONTABLE,VOUCHER_PAGE,GContablePage)

typedef struct _GContableVoucherPagePrivate GContableVoucherPagePrivate;

struct _GContableVoucherPageClass
{
  GContablePageClass parent_class;
};

struct _GContableVoucherPage
{
  GContablePage parent_instance;

  /* private */
  GContableVoucherPagePrivate * priv;
};

G_BEGIN_DECLS

GLIB_AVAILABLE_IN_ALL
GType		gcontable_voucher_page_get_type(void);

G_END_DECLS

#endif /* GCONTABLEVOUCHERPAGE_H_ */
