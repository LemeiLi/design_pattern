/*************************************************************************
	> File Name: algo_operation.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 04 Oct 2019 03:14:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"operation.h"
#include"algo_operation.h"

static int get_result_ov(struct operation* pthis)
{
	struct algo_operation* pthis_ = (struct algo_operation*)pthis;
	return pthis_->result;
}

static void set_result_ov(struct operation* pthis, int result)
{
	struct algo_operation* pthis_ = (struct algo_operation*)pthis;
	pthis_->result = result;
}

static void add_ops_ov(struct operation* pthis, int num)
{
	struct algo_operation* pthis_ = (struct algo_operation*)pthis;
	pthis_->result += num;
}

static void sub_ops_ov(struct operation* pthis, int num)
{
	struct algo_operation* pthis_ = (struct algo_operation*)pthis;
	pthis_->result -= num;
}

void algo_operation_init(struct algo_operation* pthis)
{
	static const struct operation_vmt vmt = {
		.get_result_vm = get_result_ov,
		.set_result_vm = set_result_ov,
		.add_ops_vm = add_ops_ov,
		.sub_ops_vm = sub_ops_ov,
	};

	operation_init(&pthis->super);
	pthis->super.vptr = &vmt;

	pthis->get_result = get_result_ov;
	pthis->set_result = set_result_ov;
	pthis->add_ops = add_ops_ov;
	pthis->sub_ops = sub_ops_ov;
}

struct algo_operation* construct_algo_operation(void)
{
	struct algo_operation* pthis = malloc(sizeof(*pthis));

	memset(pthis, 0, sizeof(*pthis));
	algo_operation_init(pthis);

	return pthis;
}

void destruct_algo_operation(struct algo_operation* pthis)
{
	free(pthis);
}



