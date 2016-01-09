//
//  420ToNv12.c
//  420ToNv12_2D
//
//  This version of algorithm uses 2-D arrays to operate.
//
//  Created by Hank Lee on 7/30/15.
//  Copyright (c) 2015 Hank Lee. All rights reserved.
//

#include <stdint.h>

int planar_to_interleave
(
  const uint32_t    width,
  const uint32_t    height,
        uint16_t    u_et_v[height / 2][width / 2],
  const uint8_t     u     [height / 2][width / 2],
  const uint8_t     v     [height / 2][width / 2]
)
{
    int i, j;

    #pragma omp parallel for
    for (i = 0; i < height / 2; i++)
    {
        #pragma omp parallel for
        for (j = 0; j < width / 2; j++)
        {          
            // fetch U, V sample
            uint8_t u_sample = u[i][j];
            uint8_t v_sample = v[i][j];
            
            // write UV into buffer           
            u_et_v[i][j] = (v_sample << 8) | u_sample;
        }
    }


    return 0;
}
