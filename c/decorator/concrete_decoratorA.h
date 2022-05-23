/*************************************************************************
	> File Name: concrete_decoratorA.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 29 Dec 2019 05:58:17 PM CST
 ************************************************************************/

#ifndef _CONCRETE_DECORATORA_H
#define _CONCRETE_DECORATORA_H

#include "component.h"
#include "decorator.h"

typedef struct concrete_decoratorA ConcreteDecoratorA;

#define concrete_decoratorA_attribute_alone \
	char state[16];

#define concrete_decoratorA_operation_alone

#define concrete_decoratorA_attribute \
	decorator_attribute              \
	concrete_decoratorA_attribute_alone 

#define concrete_decoratorA_operation \
	decorator_operation              \
	concrete_decoratorA_operation_alone

typedef struct concrete_decoratorA {
	Decorator super;
	concrete_decoratorA_attribute 
	concrete_decoratorA_operation
}ConcreteDecoratorA;

extern ConcreteDecoratorA* ConstructConcreteDecoratorA(Component* beDecorator);
extern void DestructConcreteDecorator(ConcreteDecoratorA** ppthis);

#endif // _CONCRETE_DECORATORA_H
