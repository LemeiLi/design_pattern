/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/iterator/array_iterator.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 02:18:31 PM CST
 ************************************************************************/

#ifndef _ARRAY_ITERATOR_H
#define _ARRAY_ITERATOR_H

#include<stdbool.h>
#include"iterator.h"
#include"array_aggregate.h"

struct array_iterator {
	struct iterator super;
	struct array_aggregate* agg;
	int index;

	void (*first)(struct iterator* pthis);
	void (*next)(struct iterator* pthis);
	bool (*is_done)(struct iterator* pthis);
	char* (*current_item)(struct iterator* pthis);
};

extern struct array_iterator* construct_array_iterator(struct array_aggregate* agg);
extern void destruct_array_iterator(struct array_iterator* pthis);

#endif // _ARRAY_ITERATOR_H
