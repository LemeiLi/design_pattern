/*************************************************************************
	> File Name: factory.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 02 Aug 2018 03:36:55 PM CST
 ************************************************************************/

#include<iostream>
#include "factory.h"
#include "product.h"

using namespace std;

Factory::Factory()
{
	;
}

Factory::~Factory()
{
	;
}

ConcreteFactory::ConcreteFactory()
{
	std::cout << "ConcreteFactory......" << std::endl;
}

ConcreteFactory::~ConcreteFactory()
{
	;
}

Product* ConcreteFactory::CreateProduct()
{
	return new ConcreteProduct();
}

