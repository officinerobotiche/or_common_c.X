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

#ifndef STATISTICS_H
#define	STATISTICS_H

#ifdef	__cplusplus
extern "C" {
#endif

/******************************************************************************/
/* System Level #define Macros                                                */
/******************************************************************************/
    
#define STAT_BUFFER_SIZE 16
    
    typedef enum _math_buffer_size {
        MATH_BUFF_1   = 0,
        MATH_BUFF_2   = 1,
        MATH_BUFF_4   = 2,
        MATH_BUFF_16  = 3,
        MATH_BUFF_32  = 4,
        MATH_BUFF_64  = 5,
        MATH_BUFF_128 = 6,
        MATH_BUFF_256 = 7,
    } math_buffer_size_t;
    
    typedef struct _statistic_buffer {
        int buffer[STAT_BUFFER_SIZE];
        unsigned int head;
        long int sum;
    } statistic_buffer;

    
/******************************************************************************/
/* System Function Prototypes                                                 */
/******************************************************************************/
    
void init_statistic_buffer(statistic_buffer* buff);

void update_statistic(statistic_buffer* buff, int data);

inline int statistic_buff_mean(unsigned int* Buffer, int start, math_buffer_size_t size);

#ifdef	__cplusplus
}
#endif

#endif	/* STATISTICS_H */

