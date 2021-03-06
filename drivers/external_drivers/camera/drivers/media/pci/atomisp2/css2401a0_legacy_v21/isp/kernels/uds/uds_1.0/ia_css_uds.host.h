/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

#ifndef __IA_CSS_UDS_HOST_H
#define __IA_CSS_UDS_HOST_H

#include "sh_css_params.h"

#include "ia_css_uds_param.h"

void
ia_css_uds_encode(
	struct sh_css_sp_uds_params *to,
	const struct ia_css_uds_config *from,
	unsigned size);

void
ia_css_uds_dump(
	const struct sh_css_sp_uds_params *uds,
	unsigned level);

#endif /* __IA_CSS_UDS_HOST_H */
