/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/proxy/real_subject.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Wed 02 Oct 2019 03:59:17 PM CST
 ************************************************************************/

#ifndef _PROXY_H
#define _PROXY_H

#include"subject.h"
#include"real_subject.h"

struct proxy {
	struct subject super;
	int real_value;

	struct real_subject* prs;
};

extern struct proxy* construct_proxy(struct real_subject* prs);

#endif // _PROXY_H
