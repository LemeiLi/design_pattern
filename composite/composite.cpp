/*************************************************************************
	> File Name: composite.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Mon 13 Aug 2018 04:06:13 PM CST
 ************************************************************************/

#include<iostream>
#include"composite.hpp"
#include"component.hpp"

using namespace std;

Composite::Composite()
{
	//vector<Component*>::iterator itend = comVec.begin();
}

void Composite::Add(Component* com)
{
	comVec.push_back(com);
}
Composite::~Composite(){}

void Composite::Operation()
{
	vector<Component*>::iterator comIter = comVec.begin();
	for(; comIter != comVec.end(); comIter++) {
		(*comIter)->Operation();
	}
}

//void Composite::Remove(Component* com)
void Composite::Remove(std::vector<Component*>::iterator iter)
{
	comVec.erase(iter);
}

Component* Composite::GetChild(int index)
{
	return comVec[index];
}


