/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/iterator/aggregate.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 02:31:35 PM CST
 ************************************************************************/

#ifndef _AGGREGATE_H
#define _AGGREGATE_H

#include "iterator.h"

struct aggregate_vmt;
struct aggregate {
	const struct aggregate_vmt* vptr;
	struct iterator* (*create_iterator)(struct aggregate* pthis);
};

struct aggregate_vmt {
	struct iterator* (*create_iterator_vm)(struct aggregate* pthis);
};


extern void aggregate_init(struct aggregate* pthis);

#endif // _AGGREGATE_H
