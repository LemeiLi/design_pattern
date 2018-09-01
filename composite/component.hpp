/*************************************************************************
	> File Name: component.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Mon 13 Aug 2018 03:19:28 PM CST
 ************************************************************************/

#ifndef _COMPONENT_HPP
#define _COMPONENT_HPP

class Component
{
public:
	Component();
	virtual ~Component();
public:
	virtual void Operation();
	virtual void Add(const Component&);
	virtual void Remove(const Component&);
	virtual Component* GetChild(int);
protected:
private:
};



#endif // _COMPONENT_HPP
