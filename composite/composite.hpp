/*************************************************************************
	> File Name: composite.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Mon 13 Aug 2018 03:28:53 PM CST
 ************************************************************************/

#ifndef _COMPOSITE_HPP
#define _COMPOSITE_HPP
#include"component.hpp"
#include<vector>

class Composite: public Component
{
public:
	Composite();
	~Composite();
public:
	void Operation();
	void Add(Component* com);
	void Remove(std::vector<Component*>::iterator iter);
	Component* GetChild(int index);
protected:
private:
	std::vector<Component*> comVec;
};

#endif // _COMPOSITE_HPP
