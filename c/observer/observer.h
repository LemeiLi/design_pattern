/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/observer/observer.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Thu 03 Oct 2019 04:30:10 PM CST
 ************************************************************************/

#ifndef _OBSERVER_H
#define _OBSERVER_H

#include"ulist.h"

///< interface class
struct subject;
struct observer_vmt;
struct observer {
	const struct observer_vmt* vptr;
	struct list_head node;
	void (*update)(struct observer* pthis, struct subject* psub);
};

struct observer_vmt {
	void (*update_virtual)(struct observer* pthis, struct subject* psub);
};

extern void observer_init(struct observer* pthis);

#endif // _OBSERVER_H
