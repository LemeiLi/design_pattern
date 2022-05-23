/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/decorator/component.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 29 Dec 2019 04:29:26 PM CST
 ************************************************************************/

#include<stdio.h>
#include"component.h"

static void operation(Component* pthis)
{
	if(pthis->vptr)	{
		printf("%s:%s\n",__FILE__, __func__);
		pthis->vptr->operation(pthis);
	}
	else 
		printf("%s:%s\n",__FILE__, __func__);

}

static ComponentVMT vmt = {
	.operation = operation,
};

void ComponentInit(Component* pthis)
{
	pthis->operation = operation;		
	pthis->vptr = &vmt;
}



