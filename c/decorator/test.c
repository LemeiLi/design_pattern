/*************************************************************************
	> File Name: test.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 29 Dec 2019 06:29:31 PM CST
 ************************************************************************/

#include<stdio.h>
#include"component.h"
#include"concrete_component.h"
#include"decorator.h"
#include"concrete_decoratorA.h"

int main()
{
	Component* cobj = (Component*)ConstructConcreteComponent();

	ConcreteDecoratorA* dobj = ConstructConcreteDecoratorA(cobj);
	dobj->operation((Component*)dobj);
	

	return 0;
}
