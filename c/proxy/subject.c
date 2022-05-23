/*************************************************************************
	> File Name: subject.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Wed 02 Oct 2019 03:39:49 PM CST
 ************************************************************************/

#include<stdio.h>
#include"subject.h"

///< interface class

static void subject_request(struct subject* pthis)
{
	pthis->vptr->request(pthis);
}

void subject_init(struct subject* pthis)
{
	pthis->request = subject_request;
}




