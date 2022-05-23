/*************************************************************************
	> File Name: list_iterator.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 04:04:58 PM CST
 ************************************************************************/

#ifndef _LIST_ITERATOR_H
#define _LIST_ITERATOR_H

#include<stdbool.h>
#include"iterator.h"
#include"list_aggregate.h"

struct list_iterator {
	struct iterator super;
	struct list_aggregate* agg;
	int index;

	void (*first)(struct iterator* pthis);
	void (*next)(struct iterator* pthis);
	bool (*is_done)(struct iterator* pthis);
	char* (*current_item)(struct iterator* pthis);
};

extern struct list_iterator* construct_list_iterator(struct list_aggregate* agg);
extern void destruct_list_iterator(struct list_iterator* pthis);



#endif // _LIST_ITERATOR_H
