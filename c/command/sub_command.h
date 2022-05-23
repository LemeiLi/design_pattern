/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/command/sub_command.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 04 Oct 2019 04:15:05 PM CST
 ************************************************************************/

#ifndef _SUB_COMMAND_H
#define _SUB_COMMAND_H

#include"command.h"
#include"operation.h"

struct sub_command {
	struct command super;	
	int ope_num;
	struct operation* operation;

	void (*exectue)(struct command* pthis);
	void (*undo)(struct command* pthis);
};
struct sub_command* construct_sub_commmad(struct operation* ops, int ope_num);
extern void destruct_sub_command(struct sub_command* pthis);

#endif // _SUB_COMMAND_H
