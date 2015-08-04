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

/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

#include "or_math/math.h"

/******************************************************************************/
/* Global Variable Declaration                                                */
/******************************************************************************/

/*****************************************************************************/
/* Communication Functions                                                   */
/*****************************************************************************/

int maxValue(int* myArray, size_t size) {
    /* enforce the contract */
    //    assert(myArray && size);
    size_t i;
    int maxValue = myArray[0];

    for (i = 1; i < size; ++i) {
        if (myArray[i] > maxValue) {
            maxValue = myArray[i];
        }
    }
    return maxValue;
}

float maxValueFloat(float* myArray, size_t size) {
    /* enforce the contract */
    //    assert(myArray && size);
    size_t i;
    float maxValue = myArray[0];

    for (i = 1; i < size; ++i) {
        if (myArray[i] > maxValue) {
            maxValue = myArray[i];
        }
    }
    return maxValue;
}

int NumberOfSetBits(int i) {
     i = i - ((i >> 1) & 0x5555);
     i = (i & 0x3333) + ((i >> 2) & 0x3333);
     return (((i + (i >> 4)) & 0x0F0F) * 0x0101) >> 12;
}
