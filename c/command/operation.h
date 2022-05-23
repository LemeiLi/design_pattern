/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/command/operation.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 04 Oct 2019 03:12:57 PM CST
 ************************************************************************/

#ifndef _OPERATION_H
#define _OPERATION_H

struct operation_vmt;
struct operation {
	const struct operation_vmt* vptr;
	int (*get_result)(struct operation* pthis);
	void (*set_result)(struct operation* pthis, int result);
	void (*add_ops)(struct operation* pthis, int num);
	void (*sub_ops)(struct operation* pthis, int num);
}; 

struct operation_vmt {
	int (*get_result_vm)(struct operation* pthis);
	void (*set_result_vm)(struct operation* pthis, int result);
	void (*add_ops_vm)(struct operation* pthis, int num);
	void (*sub_ops_vm)(struct operation* pthis, int num);
};

extern void operation_init(struct operation* pthis);

#endif // _OPERATION_H
