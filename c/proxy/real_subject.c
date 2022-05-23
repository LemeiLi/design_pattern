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

static void real_subject_request(struct subject* pthis)
{
	printf("real subject request!\n");
}

static void real_subject_init(struct real_subject* pthis)
{
	static struct subject_vmt rs_vmt = {
		.request = real_subject_request,
	};
	pthis->super.vptr = &rs_vmt;
}

struct real_subject* construct_real_subject(void)
{
	struct real_subject* pthis = malloc(sizeof(*pthis));

	subject_init(&pthis->super);
	real_subject_init(pthis);

	return pthis;
}



