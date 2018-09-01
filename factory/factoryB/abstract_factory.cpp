/*************************************************************************
	> File Name: abstract_factory.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 02 Aug 2018 05:18:49 PM CST
 ************************************************************************/

#include<iostream>
#include"abstract_factory.h"
#include"product.h"

using namespace std;

AbstractFactory::AbstractProductA()
{
	;
}

AbstractFactory::~AbstractProductA()
{
	;
}

ConcreteFactory1::ConcreteFactory1()
{
	;
}

ConcreteFactory1::~ConcreteFactory1()
{
	;
}

AbstractProductA* ConcreteFactory1::CreateProductA()
{
	return new ConcreteProductA1();
}

AbstractProductB* ConcreteFactory1::CreateProductB()
{
	return new ConcreteProductB1();
}

ConcreteFactory2::ConcreteFactory2()
{
	;
}

ConcreteFactory2::~ConcreteFactory2()
{
	;
}

AbstractProductA* ConcreteFactory2::CreateProductA() 
{
	return new ConcreteProductA2();
}

AbstractProductB* ConcreteFactory2::CreateProductB() 
{
	return new ConcreteProductB2();
}

