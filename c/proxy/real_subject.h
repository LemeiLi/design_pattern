/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/proxy/real_subject.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Wed 02 Oct 2019 03:59:17 PM CST
 ************************************************************************/

#ifndef _REAL_SUBJECT_H
#define _REAL_SUBJECT_H

#include"subject.h"

struct real_subject {
	struct subject super;
	int real_value;
};

extern struct real_subject* construct_real_subject(void);

#endif // _REAL_SUBJECT_H
