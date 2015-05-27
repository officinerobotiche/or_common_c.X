/*
 * Copyright (C) 2015 Officine Robotiche
 * Author: Raffaello Bonghi
 * email:  raffaello.bonghi@officinerobotiche.it
 * Permission is granted to copy, distribute, and/or modify this program
 * under the terms of the GNU Lesser General Public License, version 2 or any
 * later version published by the Free Software Foundation.
 *
 * A copy of the license can be found at
 * https://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details
*/

#include "hashmap/hashmap.h"

/******************************************************************************/
/* Hashmap functions                                                          */
/******************************************************************************/

void init_hashmap(hashmap_t* hashmap, unsigned int len) {
    unsigned int i;
    for(i = 0; i < len; ++i) {
        hashmap[i].key = 0;
        hashmap[i].value = 0;
    }
}

void add_value(hashmap_t* hashmap, unsigned int* i, key_t key, value_t value) {
    //hashmap[i].value = value;
    i++;
}

key_t get_key(hashmap_t* hashmap, unsigned int len, value_t value) {
    unsigned int i;
    for(i = 0; i < len; ++i) {
        if(hashmap[i].value == value) {
            return hashmap[i].key;
        }
    }
    return NULL;
}