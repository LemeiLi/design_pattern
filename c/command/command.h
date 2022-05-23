/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/command/command.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 04 Oct 2019 03:55:31 PM CST
 ************************************************************************/

#ifndef _COMMAND_H
#define _COMMAND_H

struct command_vmt;
struct command {
	const struct command_vmt *vptr;
	void (*exectue)(struct command* pthis);
	void (*undo)(struct command* pthis);
};

struct command_vmt {
	void (*exectue_vm)(struct command* pthis);
	void (*undo_vm)(struct command* pthis);
};

extern void command_init(struct command* pthis);

#endif // _COMMAND_H
