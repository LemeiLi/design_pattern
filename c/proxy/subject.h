/*************************************************************************
	> File Name: subject.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Wed 02 Oct 2019 03:47:30 PM CST
 ************************************************************************/

#ifndef _SUBJECT_H
#define _SUBJECT_H

struct subject_vmt;
struct subject {
	const struct subject_vmt* vptr;
	void (*request)(struct subject* pthis);
};

struct subject_vmt {
	void (*request)(struct subject* pthis);
};

extern void subject_init(struct subject* pthis);

#endif // _SUBJECT_H
