/*
 Copyright (C) 2016 Alexander Borisov
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 
 Author: lex.borisov@gmail.com (Alexander Borisov)
*/

#ifndef MyFONT_LOCA_H
#define MyFONT_LOCA_H
#pragma once

#include "myfont/myosi.h"

#ifdef __cplusplus
extern "C" {
#endif

// table pclt
struct myfont_table_loca {
    uint32_t *offsets;
}
typedef myfont_table_loca_t;

#include "myfont/myfont.h"

struct myfont_font;

void myfont_load_table_loca(struct myfont_font *mf);

uint32_t myfont_loca_get_offset(struct myfont_font *mf, uint16_t glyph_index);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MyFONT_LOCA_H */
