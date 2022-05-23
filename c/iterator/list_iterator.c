/*************************************************************************
	> File Name: list_iterator.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 04:10:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include"iterator.h"
#include"list_iterator.h"
#include"list_aggregate.h"
#include"aggregate.h"

static void first_ov(struct iterator* pthis)
{
	struct list_iterator* pthis_ = (struct list_iterator*)pthis;
	pthis_->index = 0;
}
static void next_ov(struct iterator* pthis)
{
	struct list_iterator* pthis_ = (struct list_iterator*)pthis;
	pthis_->index++;
}

static bool is_done_ov(struct iterator* pthis)
{
	struct list_iterator* pthis_ = (struct list_iterator*)pthis;
	if (pthis_->index == pthis_->agg->size) 
		return true;
	return false;
}

static char* current_item_ov(struct iterator* pthis)
{
	struct list_iterator* pthis_ = (struct list_iterator*)pthis;
	return pthis_->agg->get((struct aggregate*)pthis_->agg, pthis_->index);

}

void list_iterator_init(struct list_iterator* pthis, struct list_aggregate* agg)
{
	static const struct iterator_vmt vmt = {
		.first_vm = first_ov,
		.next_vm = next_ov,
		.is_done_vm = is_done_ov,
		.current_item_vm = current_item_ov,
	};

	iterator_init(&pthis->super);

	pthis->super.vptr = &vmt;	
	pthis->next = next_ov;
	pthis->first = first_ov;
	pthis->is_done = is_done_ov;
	pthis->current_item = current_item_ov;
	pthis->agg = agg;
}

struct list_iterator* construct_list_iterator(struct list_aggregate* agg)
{
	struct list_iterator* pthis = malloc(sizeof(*pthis));

	memset(pthis, 0, sizeof(*pthis));
	list_iterator_init(pthis, agg);

	return pthis;
}

void destruct_list_iterator(struct list_iterator* pthis)
{
	free(pthis);
}




