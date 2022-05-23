/*************************************************************************
	> File Name: calculator.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 04 Oct 2019 04:32:10 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"command.h"
#include"calculator.h"


static void set_add_cmd(struct calculator* pthis, struct command* cmd)
{
	pthis->add_cmd = cmd;		
}

static void set_sub_cmd(struct calculator* pthis, struct command* cmd)
{
	pthis->sub_cmd = cmd;		
}

static void add_pressed(struct calculator* pthis)
{
	pthis->add_cmd->exectue(pthis->add_cmd);
}

static void sub_pressed(struct calculator* pthis)
{
	pthis->sub_cmd->exectue(pthis->sub_cmd);
}

static void calculator_init(struct calculator* pthis)
{
	pthis->set_add_cmd = set_add_cmd;
	pthis->set_sub_cmd = set_sub_cmd;
	pthis->add_pressed = add_pressed;
	pthis->sub_pressed = sub_pressed;
}

struct calculator* construct_calculator(void)
{
	struct calculator* pthis = malloc(sizeof(*pthis));
	calculator_init(pthis);

	return pthis;
}

void destruct_calculator(struct calculator* pthis)
{
	free(pthis);
}




