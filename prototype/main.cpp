/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 07 Aug 2018 02:40:48 PM CST
 ************************************************************************/

#include<iostream>
#include"prototype.h"

using namespace std;

int main(int argc, char* argv[])
{
	Prototype* p = new ConcretePrototype();
	Prototype* p1 = p->Clone();
	return 0;
}


