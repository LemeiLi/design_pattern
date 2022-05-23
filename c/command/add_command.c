/*************************************************************************
	> File Name: add_command.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 04 Oct 2019 03:58:05 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"command.h"
#include"operation.h"
#include"add_command.h"


static void exectue_ov(struct command* pthis)
{
	struct add_command* pthis_ = (struct add_command*)pthis;
	pthis_->operation->add_ops(pthis_->operation, pthis_->ope_num);
}

static void undo_ov(struct command* pthis)
{
	struct add_command* pthis_ = (struct add_command*)pthis;
	pthis_->operation->sub_ops(pthis_->operation, pthis_->ope_num);
}

static void add_command_init(struct add_command* pthis, struct operation* ops, int ope_num)
{
	static const struct command_vmt vmt = {
		.exectue_vm = exectue_ov,
		.undo_vm = undo_ov,
	};
	
	command_init(&pthis->super);
	pthis->super.vptr = &vmt;
	pthis->operation = ops;
	pthis->ope_num = ope_num;
	pthis->exectue = exectue_ov;
	pthis->undo = undo_ov;
}

struct add_command* construct_add_commmad(struct operation* ops, int ope_num)
{
	struct add_command* pthis = malloc(sizeof(*pthis));
	add_command_init(pthis, ops, ope_num);

	return pthis;
}

void destruct_add_command(struct add_command* pthis)
{
	free(pthis);
}


