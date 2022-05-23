/*************************************************************************
	> File Name: aggregate.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 02:24:05 PM CST
 ************************************************************************/

#include<stdio.h>
#include"aggregate.h"
#include"iterator.h"

static struct iterator* create_iterator(struct aggregate* pthis)
{
	pthis->vptr->create_iterator_vm(pthis);	
}

void aggregate_init(struct aggregate* pthis)
{
	static const struct aggregate_vmt vmt = {
		.create_iterator_vm = NULL,	
	};

	pthis->create_iterator = create_iterator;
}


