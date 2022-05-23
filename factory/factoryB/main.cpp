/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 02 Aug 2018 03:57:46 PM CST
 ************************************************************************/

#include<iostream>
#include"abstract_factory.h"

using namespace std;


int main(int argc, const char* argv[])
{
	AbstractFactory* cf1 = new ConcreteFactory1();
	cf1->CreateProductA();
	cf1->CreateProductB();
	AbstractFactory* cf2 = new ConcreteFactory2();
	cf2->CreateProductA();
	cf2->CreateProductB();
	return 0;
}

