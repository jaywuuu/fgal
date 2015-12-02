//
// Created by wjason on 11/24/2015.
//

#ifndef FGAL_TYPES_H_H
#define FGAL_TYPES_H_H

typedef struct _SHAPE_POINT {
    unsigned int x;
    unsigned int y;
} SHAPE_POINT;

typedef struct _SHAPE_RECT {
    SHAPE_POINT p0;
    SHAPE_POINT p1;
} SHAPE_RECT;


#endif //FGAL_TYPES_H_H
