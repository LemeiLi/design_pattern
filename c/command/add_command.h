/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/command/add_command.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 04 Oct 2019 04:15:05 PM CST
 ************************************************************************/

#ifndef _ADD_COMMAND_H
#define _ADD_COMMAND_H

#include"command.h"
#include"operation.h"

struct add_command {
	struct command super;	
	int ope_num;
	struct operation* operation;

	void (*exectue)(struct command* pthis);
	void (*undo)(struct command* pthis);
};
struct add_command* construct_add_commmad(struct operation* ops, int ope_num);
extern void destruct_add_command(struct add_command* pthis);

#endif // _ADD_COMMAND_H
