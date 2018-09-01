/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 15 Aug 2018 05:58:08 PM CST
 ************************************************************************/

#include<iostream>
#include"proxy.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
	Subject* sub = new ConcreteSubject();
	Proxy* p = new Proxy(sub);
	p->Request();

	return 0;
}


