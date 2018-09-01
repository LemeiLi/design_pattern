/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 16 Aug 2018 04:43:06 PM CST
 ************************************************************************/

#include<iostream>
#include"template.hpp"

using namespace std;

int main(int argc, const char* argvp[])
{
	AbstractClass* p1 = new ConcreteClass1();
	AbstractClass* p2 = new ConcreteClass2();

	p1->TemplateMethod();
	p2->TemplateMethod();

	delete p1, p2;

	return 0;
}


