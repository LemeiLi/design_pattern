/*************************************************************************
	> File Name: concrete_component.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 29 Dec 2019 04:43:02 PM CST
 ************************************************************************/

#ifndef _CONCRETE_COMPONENT_H
#define _CONCRETE_COMPONENT_H

#include "component.h"

typedef struct concrete_component ConcreteComponent;

#define concrete_component_attribute_alone

#define concrete_component_operation_alone

#define concrete_component_attribute \
	component_attribute              \
	concrete_component_attribute_alone 

#define concrete_component_operation \
	component_operation              \
	concrete_component_operation_alone

typedef struct concrete_component_vmt {
	concrete_component_operation
}ConcreteComponentVMT;

typedef struct concrete_component {
	Component super;
	ConcreteComponentVMT *vptr;
	concrete_component_attribute 
	concrete_component_operation
}ConcreteComponent;

extern ConcreteComponent* ConstructConcreteComponent(void);

extern void DestructConcreteComponent(ConcreteComponent** ppthis);

#endif // _CONCRETE_COMPONENT_H
