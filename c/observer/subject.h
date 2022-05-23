/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/observer/subject.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Thu 03 Oct 2019 03:15:59 PM CST
 ************************************************************************/

#ifndef _SUBJECT_H
#define _SUBJECT_H

#include "ulist.h"
#include"observer.h"

struct subject_vmt;
struct subject {
	struct subject_vmt* vptr;	
	//struct observer* observers[10];
	struct list_head list_obs;

	void (*attach_observer)(struct subject* pthis, struct observer* pobs);
	void (*detach_observer)(struct subject* pthis, struct observer* pobs);
	void (*notify_observers)(struct subject* pthis);
};

struct subject_vmt {
	void (*attach_observer_virtual)(struct subject* pthis, struct observer* pobs);
	void (*detach_observer_virtual)(struct subject* pthis, struct observer* pobs);
	void (*notify_observers_virtual)(struct subject* pthis);
};

extern void subject_init(struct subject* pthis);

#endif // _SUBJECT_H
