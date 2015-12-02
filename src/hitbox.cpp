//
// Created by wjason on 11/24/2015.
//

#include "hitbox.h"

bool is_hit(SORTED_HITBOX_LIST *hit_list, SORTED_HURTBOX_LIST *hurt_list)
{
    bool isHit = false;

    if (hit_list->sort_mode == SORT_BY_X && hurt_list->sort_mode == SORT_BY_X) {
        isHit = is_hit_by_x(hit_list, hurt_list);
    }
    else {
        // unsupported
    }

    return isHit;
}

bool is_hit_by_x(SORTED_HITBOX_LIST *hit_list, SORTED_HURTBOX_LIST *hurt_list) {
    bool isHit = false;


    return isHit;
}

// Priority Queue using min/max heap for hit/hurt boxes
HBoxPQ::HBoxPQ() : m_first(NULL),
                   m_heapMode(0),
                   m_numItems(0)
{
}

HBoxPQ::~HBoxPQ(void) {
    // TODO: free all pointers.
}

void HBoxPQ::add_item(SHAPE_RECT *item) {
    PQ_HEAP_NODE *node = (PQ_HEAP_NODE*)malloc(sizeof(PQ_HEAP_NODE));
    node->data = item;
    if (m_first == NULL) {
        m_first = node;
        return;
    }
}
