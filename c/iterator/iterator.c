/*************************************************************************
	> File Name: iterator.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 01:43:00 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include"iterator.h"



static void first(struct iterator* pthis)
{
	pthis->vptr->first_vm(pthis);
}
static void next(struct iterator* pthis)
{
	pthis->vptr->next_vm(pthis);
}

static bool is_done(struct iterator* pthis)
{
	pthis->vptr->is_done_vm(pthis);
}

static char* current_item(struct iterator* pthis)
{
	pthis->vptr->current_item_vm(pthis);
}

void iterator_init(struct iterator* pthis)
{
	static const struct iterator_vmt vmt = {
		.first_vm = NULL,	
		.next_vm = NULL,
		.is_done_vm = NULL,
		.current_item_vm = NULL,
	};

	pthis->vptr = &vmt;
	pthis->first = first;
	pthis->next = next;
	pthis->is_done = is_done;
	pthis->current_item = current_item;
}


