/*
 Copyright (C) 2016-2017 Alexander Borisov
 
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

#ifndef MODEST_NODE_SERIALIZATION_H
#define MODEST_NODE_SERIALIZATION_H
#pragma once

#include <modest/myosi.h>
#include <modest/node/node.h>
#include <modest/node/raw_property.h>
#include <mycss/myosi.h>
#include <mycss/declaration/serialization.h>

#ifdef __cplusplus
extern "C" {
#endif

struct modest_node_serialization_context {
    modest_t* modest;
    mycore_callback_serialize_f callback;
    void* context;
    bool is_use;
}
typedef modest_node_serialization_context_t;

bool modest_node_raw_serialization(modest_t* modest, modest_node_t* mnode, mycore_callback_serialize_f callback, void* context);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MODEST_NODE_SERIALIZATION_H */
