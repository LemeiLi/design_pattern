/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/observer/reader.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Thu 03 Oct 2019 05:59:22 PM CST
 ************************************************************************/

#ifndef _READER_H
#define _READER_H

#include "observer.h"
#include "subject.h"

struct reader {
	struct observer super;
	char name[10];
	void (*update)(struct observer* pthis, struct subject* psub);
};

extern struct reader* construct_reader(char* name);

extern void destruct_reader(struct reader* pthis);

#endif // _READER_H
