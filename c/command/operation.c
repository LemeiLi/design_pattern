/*************************************************************************
	> File Name: operation.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 04 Oct 2019 02:49:28 PM CST
 ************************************************************************/

#include<stdio.h>
#include"operation.h"

static int get_result(struct operation* pthis)
{
	pthis->vptr->get_result_vm(pthis);
}

static void set_result(struct operation* pthis, int result)
{
	pthis->vptr->set_result_vm(pthis, result);
}

static void add_ops(struct operation* pthis, int num)
{
	pthis->vptr->add_ops_vm(pthis, num);
}

static void sub_ops(struct operation* pthis, int num)
{
	pthis->vptr->sub_ops_vm(pthis, num);
}

void operation_init(struct operation* pthis)
{
	static const struct operation_vmt vmt = {
		.get_result_vm = NULL,
		.set_result_vm = NULL,
		.add_ops_vm = NULL,
		.sub_ops_vm = NULL,
	};

	pthis->vptr = &vmt;
	pthis->get_result = get_result;
	pthis->set_result = set_result;
	pthis->add_ops = add_ops;
	pthis->sub_ops = sub_ops;
}



		
