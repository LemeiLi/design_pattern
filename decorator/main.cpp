/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 09 Aug 2018 03:45:02 PM CST
 ************************************************************************/

#include<iostream>
#include"decorator.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	Component* com = new ConcreteComponent();
	Decorator* dec = new ConcreteDecorator(com);
	dec->Operation();
	delete dec;

	return 0;
}

