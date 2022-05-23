/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/decorator/decorator.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 29 Dec 2019 05:39:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include"component.h"
#include"concrete_component.h"
#include"decorator.h"

static void operation(Component* pthis)
{
	Decorator* pthis_ = (Decorator*)pthis;
	sleep(1);
	printf("%s:%s\n", __FILE__, __func__);

	pthis_->beDecorator->operation(pthis_->beDecorator);

	return;
}

static DecoratorVMT vmt = {
	.operation = operation,
};

void DecoratorInit(Decorator* pthis, Component* beDecorator)
{
	memset(pthis, 0, sizeof(*pthis));
	ComponentInit(&pthis->super);
	pthis->beDecorator = beDecorator;
	pthis->super.vptr = (ComponentVMT *)&vmt;
	pthis->operation = operation;
}

