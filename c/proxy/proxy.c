/*************************************************************************
	> File Name: real_subject.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Wed 02 Oct 2019 03:48:22 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"subject.h"
#include"real_subject.h"
#include"proxy.h"

static void proxy_subject_request(struct subject* pthis)
{
	printf("proxy subject request!\n");
	struct proxy* pthis_ = (struct proxy*)pthis;
	struct subject* ps = (struct subject*)(pthis_->prs);
	ps->request(ps);
}

static void proxy_init(struct proxy* pthis, struct real_subject* prs)
{
	static struct subject_vmt pr_vmt = {
		.request = proxy_subject_request,
	};
	pthis->super.vptr = &pr_vmt;
	pthis->prs = prs;
}

struct proxy* construct_proxy(struct real_subject* prs)
{
	struct proxy* pthis = malloc(sizeof(*pthis));

	subject_init(&pthis->super);
	proxy_init(pthis, prs);

	return pthis;
}



