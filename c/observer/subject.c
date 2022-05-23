/*************************************************************************
	> File Name: subject.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Thu 03 Oct 2019 02:35:52 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"subject.h"
#include"observer.h"
#include"ulist.h"

void attach_observer_virtual(struct subject* pthis, struct observer* pobs)
{
	list_add(&pobs->node, &pthis->list_obs);
}

void detach_observer_virtual(struct subject* pthis, struct observer* pobs)
{
	struct observer* temp, *guard;
	list_for_each_entry_safe(temp, guard, &pthis->list_obs, node) {
		if (temp == pobs) {
			printf("detach a observer on observers list.\n");
			list_del(&temp->node);
		}
	}
}

void notify_observers_virtual(struct subject* pthis) 
{
	struct observer* temp;	
	list_for_each_entry(temp, &pthis->list_obs, node) {
		temp->update(temp, pthis);
	}
}

void attach_observer_subject(struct subject* pthis, struct observer* pobs)
{
	pthis->vptr->attach_observer_virtual(pthis, pobs);	
}

void detach_observer_subject(struct subject* pthis, struct observer* pobs)
{
	pthis->vptr->detach_observer_virtual(pthis, pobs);	
}

void notify_observers_subject(struct subject* pthis)
{
	pthis->vptr->notify_observers_virtual(pthis);	
}

void subject_init(struct subject* pthis)
{
	static struct subject_vmt svmt = {
		.attach_observer_virtual = attach_observer_virtual,	
		.detach_observer_virtual = detach_observer_virtual,
		.notify_observers_virtual = notify_observers_virtual,
	};

	INIT_LIST_HEAD(&pthis->list_obs);
	pthis->vptr = &svmt; 
	pthis->attach_observer = attach_observer_subject;
	pthis->detach_observer = detach_observer_subject;
	pthis->notify_observers = notify_observers_subject;
}

struct subject* construct_subject(void)
{
	struct subject* pthis = malloc(sizeof(*pthis));

	subject_init(pthis);

	return pthis;
}

void destruct_subject(struct subject* pthis)
{
	free(pthis);
}



