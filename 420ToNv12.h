//
//  420ToNv12.h
//  420ToNv12_2D
//
//  Created by Hank Lee on 7/30/15.
//  Copyright (c) 2015 Hank Lee. All rights reserved.
//

#ifndef ___420ToNv12_2D___
#define ___420ToNv12_2D___


extern int planar_to_interleave
(
  const uint32_t    width,
  const uint32_t    height,
        uint16_t    u_et_v[height / 2][width / 2],
  const uint8_t     u     [height / 2][width / 2],
  const uint8_t     v     [height / 2][width / 2]
 );


#endif
