/*************************************************************************
	> File Name: array_iterator.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 01:56:21 PM CST
 ************************************************************************/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include"iterator.h"
#include"array_iterator.h"
#include"array_aggregate.h"
#include"aggregate.h"

static void first_ov(struct iterator* pthis)
{
	struct array_iterator* pthis_ = (struct array_iterator*)pthis;
	pthis_->index = 0;
}
static void next_ov(struct iterator* pthis)
{
	struct array_iterator* pthis_ = (struct array_iterator*)pthis;
	pthis_->index++;
}

static bool is_done_ov(struct iterator* pthis)
{
	struct array_iterator* pthis_ = (struct array_iterator*)pthis;
	if (pthis_->index == pthis_->agg->size) 
		return true;
	return false;
}

static char* current_item_ov(struct iterator* pthis)
{
	struct array_iterator* pthis_ = (struct array_iterator*)pthis;
	return pthis_->agg->get((struct aggregate*)pthis_->agg, pthis_->index);

}

void array_iterator_init(struct array_iterator* pthis, struct array_aggregate* agg)
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

struct array_iterator* construct_array_iterator(struct array_aggregate* agg)
{
	struct array_iterator* pthis = malloc(sizeof(*pthis));

	memset(pthis, 0, sizeof(*pthis));
	array_iterator_init(pthis, agg);

	return pthis;
}

void destruct_array_iterator(struct array_iterator* pthis)
{
	free(pthis);
}




