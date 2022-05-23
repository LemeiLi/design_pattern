/*************************************************************************
	> File Name: observer.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Thu 03 Oct 2019 03:55:42 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"observer.h"
#include"subject.h"
#include"ulist.h"


void update_observer(struct observer* pthis, struct subject* psub)
{
	pthis->vptr->update_virtual(pthis, psub);
}

void observer_init(struct observer* pthis)
{
	static const struct observer_vmt ovmt = {
		.update_virtual = NULL, ///< must override by derived class
	};
	INIT_LIST_HEAD(&pthis->node);
	pthis->vptr = &ovmt;
	pthis->update = update_observer;
}
