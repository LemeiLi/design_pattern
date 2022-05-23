/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/command/calculator.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 04 Oct 2019 04:48:16 PM CST
 ************************************************************************/

#ifndef _CALCULATOR_H
#define _CALCULATOR_H

struct calculator {
	struct command* add_cmd;
	struct command* sub_cmd;

	void (*set_add_cmd)(struct calculator* pthis, struct command* cmd);
	void (*set_sub_cmd)(struct calculator* pthis, struct command* cmd);
	void (*add_pressed)(struct calculator* pthis);
	void (*sub_pressed)(struct calculator* pthis);
}; 

extern struct calculator* construct_calculator(void);
extern void destruct_calculator(struct calculator* pthis);

#endif // _CALCULATOR_H
