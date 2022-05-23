/*************************************************************************
	> File Name: command.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 04 Oct 2019 03:42:36 PM CST
 ************************************************************************/

#include<stdio.h>
#include"command.h"

static void exectue(struct command* pthis)
{
	pthis->vptr->exectue_vm(pthis);
}

static void undo(struct command* pthis)
{
	pthis->vptr->undo_vm(pthis);
}

void command_init(struct command* pthis)
{
	static const struct command_vmt vmt = {
		.exectue_vm = NULL,
		.undo_vm = NULL,
	};		
	
	pthis->vptr = &vmt;
	pthis->exectue = exectue;	
	pthis->undo = undo;	
}


