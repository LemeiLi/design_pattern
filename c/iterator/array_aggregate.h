/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/iterator/array_aggregate.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 02:56:36 PM CST
 ************************************************************************/

#ifndef _ARRAY_AGGREGATE_H
#define _ARRAY_AGGREGATE_H

#include"aggregate.h"
#include"iterator.h"

struct array_aggregate {
	struct aggregate super;
	int size;
	char** array;

	char* (*get)(struct aggregate* pthis, int index);
	struct iterator* (*create_iterator)(struct aggregate* pthis);
};

extern struct array_aggregate* construct_array_aggregate(char* array[], int size);
extern void destruct_array_aggregate(struct array_aggregate* pthis);

#endif // _ARRAY_AGGREGATE_H
