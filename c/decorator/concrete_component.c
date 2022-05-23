/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/decorator/concrete_component.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 29 Dec 2019 04:53:16 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include"component.h"
#include"concrete_component.h"

static void operation(Component* pthis)
{
	printf("%s:%s\n", __FILE__, __func__);
	
	//ConcreteComponent* pthis_ = (ConcreteComponent*)pthis;
	sleep(1);

	return;
}

static ConcreteComponentVMT vmt = {
	.operation = operation,
};

void ConcreteComponentInit(ConcreteComponent* pthis)
{
	memset(pthis, 0, sizeof(*pthis));
	ComponentInit(&pthis->super);
	pthis->super.vptr = (ComponentVMT *)&vmt;
	pthis->operation = operation;

	return;
}

ConcreteComponent* ConstructConcreteComponent(void)
{
	ConcreteComponent* pthis = (ConcreteComponent*)malloc(sizeof(*pthis));
	ConcreteComponentInit(pthis);

	return pthis;
}

void DestructConcreteComponent(ConcreteComponent** ppthis)
{
	if (*ppthis) {
		free(*ppthis);
		*ppthis = NULL;
	}

	return;
}


