/*************************************************************************
	> File Name: product.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 02 Aug 2018 03:23:44 PM CST
 ************************************************************************/

#include<iostream>
#include "product.h"
using namespace std;

AbstractProductA::AbstractProductA()
{
	;
}

AbstractProductA::~AbstractProductA()
{
	;
}

AbstractProductB::AbstractProductB()
{
	;
}

AbstractProductB::~AbstractProductB()
{
	;
}

ConcreteProductA1::ConcreteProductA1()
{
	std::cout << "ConcreteProductA1......" << std::endl;
}

ConcreteProductA1::~ConcreteProductA1()
{
	;
}

ConcreteProductA2::ConcreteProductA2()
{
	std::cout << "ConcreteProductA2......" << std::endl;
}

ConcreteProductA2::~ConcreteProductA2()
{
	;
}

ConcreteProductB1::ConcreteProductB1()
{
	std::cout << "ConcreteProductB1......" << std::endl;
}

ConcreteProductB1::~ConcreteProductB1()
{
	;
}

ConcreteProductB2::ConcreteProductB2()
{
	std::cout << "ConcreteProductB2......" << std::endl;
}

ConcreteProductB2::~ConcreteProductB2()
{
	;
}
