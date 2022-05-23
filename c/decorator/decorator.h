/*************************************************************************
	> File Name: decorator.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 29 Dec 2019 05:31:57 PM CST
 ************************************************************************/

#ifndef _DECORATOR_H
#define _DECORATOR_H

#include "component.h"

typedef struct decorator Decorator;

#define decorator_attribute_alone \
	Component* beDecorator; ///< point to the object that be decoratored

#define decorator_operation_alone \

#define decorator_attribute \
	component_attribute              \
	decorator_attribute_alone 

#define decorator_operation \
	component_operation              \
	decorator_operation_alone

typedef struct decorator_vmt {
	decorator_operation
}DecoratorVMT;

typedef struct decorator {
	Component super;
	DecoratorVMT *vptr;
	decorator_attribute 
	decorator_operation

}Decorator;

extern void DecoratorInit(Decorator* pthis, Component* beDecorator);

#endif // _DECORATOR_H
