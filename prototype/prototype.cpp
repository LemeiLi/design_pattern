/*************************************************************************
	> File Name: prototype.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 07 Aug 2018 02:24:04 PM CST
 ************************************************************************/

#include<iostream>
#include"prototype.h"
using namespace std;

Prototype::Prototype()
{
	;
}

Prototype::~Prototype()
{
	;
}

Prototype* Prototype::Clone() const
{
	return 0;
}

ConcretePrototype::ConcretePrototype()
{
	;
}

ConcretePrototype::ConcretePrototype(
		const ConcretePrototype& cp)
{
	std::cout << "ConcretePrototype copy constructor"	<< std::endl;
}

ConcretePrototype::~ConcretePrototype()
{
	;
}

Prototype* ConcretePrototype::Clone() const
{
	return new ConcretePrototype(*this);
}


