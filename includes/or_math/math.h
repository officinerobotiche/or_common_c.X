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

#ifndef MATH_H
#define	MATH_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include <stdint.h>        /* Includes uint16_t definition                    */
#include <stdbool.h>       /* Includes true/false definition                  */
#include <string.h>
    
/******************************************************************************/
/* User Level #define Macros                                                  */
/******************************************************************************/

    #define SGN(x)  ( ((x) < 0) ?  -1 : ( ((x) == 0 ) ? 0 : 1) )

/******************************************************************************/
/* User Function Prototypes                                                   */
/******************************************************************************/

    /**
     * Evaluate max value of array in int
     * @param myArray array to find max value
     * @param size size of array
     * @return max value on array
     */
    int maxValue(int *myArray, size_t size);

    /**
     * Evaluate max value of array on float
     * @param myArray array to find max value
     * @param size size of array
     * @return max value on array
     */
    float maxValueFloat(float *myArray, size_t size);
    /**
     * Count bit in a integer
     * See https://en.wikipedia.org/wiki/Hamming_weight
     * @param i Input integer
     * @return number of 1 in i
     */
    int NumberOfSetBits(int x);
    /**
     * Count position bit
     * @param n variable
     * @return position
     */
    int bitCount(unsigned int n);
    
#ifdef	__cplusplus
}
#endif

#endif	/* MATH_H */

