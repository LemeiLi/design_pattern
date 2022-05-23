/*************************************************************************
	> File Name: list_aggregate.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 04:32:00 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"aggregate.h"
#include"list_aggregate.h"
#include"iterator.h"
#include"list_iterator.h"
#include"list_object.h"

static struct iterator* create_iterator_ov(struct aggregate* pthis)
{
	return (struct iterator*)construct_list_iterator((struct list_aggregate*)pthis);
}

static char* get(struct aggregate* pthis, int index)
{
	struct list_object* obj;
	struct list_aggregate* pthis_ = (struct list_aggregate*)pthis;

	if (index >= 0 && index < pthis_->size) {
		int ii = 0;
		list_for_each_entry(obj, pthis_->list, node) {
			if(ii++ == index) {
				return (char*)obj->data;
			}
		}
	}

	return NULL;
}

void list_aggregate_init(struct list_aggregate* pthis, struct list_head* list)
{
	static const struct aggregate_vmt vmt = {
		.create_iterator_vm = create_iterator_ov,	
	};	
	aggregate_init(&pthis->super);

	pthis->super.vptr = &vmt;
	pthis->get = get;
	pthis->create_iterator = create_iterator_ov;
	pthis->list = list;

	int size = 0;
	list_for_each(list, pthis->list) {
		size++;		
	}
	pthis->size = size;
}

struct list_aggregate* construct_list_aggregate(struct list_head* list)
{
	struct list_aggregate* pthis = malloc(sizeof(*pthis));

	memset(pthis, 0, sizeof(*pthis));
	list_aggregate_init(pthis, list);

	return pthis;
}

void destruct_list_aggregate(struct list_aggregate* pthis)
{
	free(pthis);
}


