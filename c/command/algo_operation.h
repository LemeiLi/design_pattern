/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/command/algo_operation.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 04 Oct 2019 03:31:43 PM CST
 ************************************************************************/

#ifndef _ALGO_OPERATION_H
#define _ALGO_OPERATION_H

#include"operation.h"

struct algo_operation {
	struct operation super;
	int result;

	int (*get_result)(struct operation* pthis);
	void (*set_result)(struct operation* pthis, int result);
	void (*add_ops)(struct operation* pthis, int num);
	void (*sub_ops)(struct operation* pthis, int num);
}; 

extern struct algo_operation* construct_algo_operation(void);
extern void destruct_algo_operation(struct algo_operation* pthis);


#endif // _ALGO_OPERATION_H
