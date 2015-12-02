//
// Created by wjason on 11/24/2015.
//

#ifndef FGAL_HITBOX_H
#define FGAL_HITBOX_H

#include <stdlib.h>
#include "inc/types.h"

typedef SHAPE_RECT HITBOX, HURTBOX;

typedef enum _SORTED_BOX_LIST_SORT_MODE {
    SORT_BY_X = 0,
    SORT_BY_Y
} SORTED_BOX_LIST_SORT_MODE;

typedef struct _SORTED_BOX_LIST {
    unsigned int length;
    SHAPE_RECT *items;
    SORTED_BOX_LIST_SORT_MODE sort_mode;
} SORTED_HITBOX_LIST, SORTED_HURTBOX_LIST;

class HBoxPQ {
private:
    typedef struct _PQ_HEAP_NODE {
        PQ_HEAP_NODE *left;
        PQ_HEAP_NODE *right;
        SHAPE_RECT *data;
    } PQ_HEAP_NODE;

    typedef enum _PQ_HEAP_MODE {
        PQ_MAX_HEAP = 0,
        PQ_MIN_HEAP
    } PQ_HEAP_MODE;

    unsigned int m_numItems;
    PQ_HEAP_NODE *m_first;
    PQ_HEAP_MODE m_heapMode;

public:
    HBoxPQ();
    ~HBoxPQ(void);

    void add_item(SHAPE_RECT *item);
    PQ_HEAP_NODE *pop();
    PQ_HEAP_MODE *peek();
};

bool is_hit(SORTED_HITBOX_LIST *hit_list, SORTED_HURTBOX_LIST *hurt_list);
bool is_hit_by_x(SORTED_HITBOX_LIST *hit_list, SORTED_HURTBOX_LIST *hurt_list);


#endif //FGAL_HITBOX_H
