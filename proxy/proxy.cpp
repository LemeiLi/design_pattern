/*************************************************************************
	> File Name: proxy.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 15 Aug 2018 05:50:48 PM CST
 ************************************************************************/

#include<iostream>
#include"proxy.hpp"

using namespace std;

Subject::Subject(){}

Subject::~Subject(){}

ConcreteSubject::ConcreteSubject(){}

ConcreteSubject::~ConcreteSubject(){}

void ConcreteSubject::Request()
{
	std::cout << "ConcreteSubject::Request()......" << std::endl;
}

Proxy::Proxy(){}

Proxy::Proxy(Subject* sub)
{
	_sub = sub;
}

Proxy::~Proxy()
{
	delete _sub;
}

void Proxy::Request()
{
	std::cout << "Proxy::Request()......" << std::endl;
	_sub->Request();
}
