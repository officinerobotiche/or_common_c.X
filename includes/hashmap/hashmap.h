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

#ifndef HASHMAP_H
#define	HASHMAP_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdint.h>          /* For uint16_t definition                       */
#include <stdbool.h>         /* For true/false definition                     */
#include <string.h>
    
    typedef unsigned int key_t;
    
    typedef unsigned char value_t;
    
    typedef struct _hashmap {
        key_t key;
        value_t value;
    } hashmap_t;

    void init_hashmap(hashmap_t* hashmap, unsigned int len);
    
    void add_value(hashmap_t* hashmap, unsigned int* i, key_t key, value_t value);
    
    key_t get_key(hashmap_t* hashmap, unsigned int len, unsigned char value);
    
#ifdef	__cplusplus
}
#endif

#endif	/* HASHMAP_H */

