/*************************************************************************
	> File Name: component.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Mon 13 Aug 2018 03:24:24 PM CST
 ************************************************************************/

#include<iostream>
#include"component.hpp"

using namespace std;

Component::Component(){}

Component::~Component(){}

void Component::Operation(){}

void Component::Add(const Component& com){}

Component* Component::GetChild(int index)
{
	return NULL;
}

void Component::Remove(const Component& com){}

