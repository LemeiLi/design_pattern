/*************************************************************************
	> File Name: product.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 02 Aug 2018 03:23:44 PM CST
 ************************************************************************/

#include<iostream>
#include "product.h"
using namespace std;

Product::Product()
{
	;
}

Product::~Product()
{
	;
}

ConcreteProduct::ConcreteProduct()
{
	std::cout << "ConcreteProduct......" << std::endl;
}

ConcreteProduct::~ConcreteProduct()
{
	;
}

