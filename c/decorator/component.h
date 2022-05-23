/*************************************************************************
	> File Name: component.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 29 Dec 2019 04:21:18 PM CST
 ************************************************************************/

#ifndef _COMPONENT_H
#define _COMPONENT_H

typedef struct component Component;

#define component_attribute \
	
#define component_operation \
	void (*operation)(Component* pthis);


typedef struct component_vmt {
	component_operation
}ComponentVMT;

typedef struct component {
	ComponentVMT* vptr;		
	component_operation
	component_attribute
}Component;

extern void ComponentInit(Component* pthis);

#endif // _COMPONENT_H
