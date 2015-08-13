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

/*****************************************************************************/
/* Files to Include                                                          */
/*****************************************************************************/

#include "or_math/statistics.h"
    
/*****************************************************************************/
/* Global Variable Declaration                                               */
/*****************************************************************************/

int buff_lookuptable[] = {1, 2, 4, 16, 32, 64, 128, 256};

/*****************************************************************************/
/* Functions                                                                 */
/*****************************************************************************/

// http://en.wikipedia.org/wiki/Algorithms_for_calculating_variance#Online_algorithm

void init_statistic_buffer(statistic_buffer* buff) {
    int i;
    for(i=0; i < STAT_BUFFER_SIZE; i++) {
        buff->buffer[i] = 0;
    }
    buff->head = 0;
    buff->sum = 0;
}

void update_statistic(statistic_buffer* buff, int data) {
    int last_value = buff->buffer[buff->head];
    buff->buffer[buff->head] = data;
    buff->head = (unsigned int)(buff->head + 1) % STAT_BUFFER_SIZE;
    buff->sum += data - last_value;
    //printf("STAT last: %d - sum: %d\n", last_value, buff->sum);
}

inline int statistic_buff_mean(unsigned int* Buffer, int start, math_buffer_size_t size) {
    int i;
    long temp = 0;
    int len = buff_lookuptable[size];
    for(i = 0; i < len; ++i) {
        temp += (Buffer)[i+start];
    }
    return temp >> (size + 1);
}