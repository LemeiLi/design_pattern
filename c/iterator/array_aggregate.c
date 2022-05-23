/*************************************************************************
	> File Name: array_aggregate.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 02:34:02 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"aggregate.h"
#include"array_aggregate.h"
#include"iterator.h"
#include"array_iterator.h"

static struct iterator* create_iterator_ov(struct aggregate* pthis)
{
	return (struct iterator*)construct_array_iterator((struct array_aggregate*)pthis);
}

static char* get(struct aggregate* pthis, int index)
{
	struct array_aggregate* pthis_ = (struct array_aggregate*)pthis;

	if (index >= 0 && index < pthis_->size)
		return pthis_->array[index];

	return NULL;
}

void array_aggregate_init(struct array_aggregate* pthis, char* array[], int size)
{
	static const struct aggregate_vmt vmt = {
		.create_iterator_vm = create_iterator_ov,	
	};	
	aggregate_init(&pthis->super);

	pthis->super.vptr = &vmt;
	pthis->get = get;
	pthis->create_iterator = create_iterator_ov;
	pthis->array = array;
	pthis->size = size;
}

struct array_aggregate* construct_array_aggregate(char* array[], int size)
{
	struct array_aggregate* pthis = malloc(sizeof(*pthis));

	memset(pthis, 0, sizeof(*pthis));
	array_aggregate_init(pthis, array, size);

	return pthis;
}

void destruct_array_aggregate(struct array_aggregate* pthis)
{
	free(pthis);
}


