/*************************************************************************
	> File Name: list_aggregate.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 04:18:49 PM CST
 ************************************************************************/

#ifndef _LIST_AGGREGATE_H
#define _LIST_AGGREGATE_H

#include"aggregate.h"
#include"iterator.h"
#include"ulist.h"

struct list_aggregate {
	struct aggregate super;
	struct list_head *list;
	int size;

	char* (*get)(struct aggregate* pthis, int index);
	struct iterator* (*create_iterator)(struct aggregate* pthis);
};

extern struct list_aggregate* construct_list_aggregate(struct list_head* list);
extern void destruct_list_aggregate(struct list_aggregate* pthis);

#endif // _LIST_AGGREGATE_H
