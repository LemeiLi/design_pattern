/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/decorator/concrete_decoratorA.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 29 Dec 2019 06:06:12 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include"component.h"
#include"decorator.h"
#include"concrete_decoratorA.h"

static void operation(Component* pthis)
{
	ConcreteDecoratorA* pthis_ = (ConcreteDecoratorA*)pthis;
	printf("%s:%s, state: %s\n", __FILE__, __func__, pthis_->state);
	pthis_->super.operation(pthis);
	sleep(1);

	return;
}

static DecoratorVMT vmt = {
	.operation = operation,
};

void ConcreteDecoratorAInit(ConcreteDecoratorA* pthis, Component* pBeDecorator)
{
	memset(pthis, 0, sizeof(*pthis));
	DecoratorInit(&pthis->super, pBeDecorator);
	pthis->super.vptr = &vmt;
	strcpy(pthis->state, "ready!");
	pthis->operation = operation;

	return;
}

ConcreteDecoratorA* ConstructConcreteDecoratorA(Component* pBeDecorator)
{
	ConcreteDecoratorA* pthis = (ConcreteDecoratorA*)malloc(sizeof(*pthis));

	ConcreteDecoratorAInit(pthis, pBeDecorator);

	return pthis;
}

void DestructConcreteDecorator(ConcreteDecoratorA** ppthis)
{
	if (*ppthis) {
		free(*ppthis);
		*ppthis = NULL;
	}

	return;
}



