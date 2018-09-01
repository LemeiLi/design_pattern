/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/adapter/class_mode_adapter/adapter.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 08 Aug 2018 03:21:55 PM CST
 ************************************************************************/

#include<iostream>
#include"adapter.hpp"
using namespace std;

Target::Target()
{
	;
}

Target::~Target()
{
	;
}

void Target::Request()
{
	std::cout << "Target::Request" << std::endl;
}

Adaptee::Adaptee()
{
	;
}
Adaptee::~Adaptee()
{
	;
}

void Adaptee::SpecificRequest()
{
	std::cout << "Adaptee::SpecificRequest" << std::endl;
}

Adapter::Adapter()
{
	;
}

Adapter::~Adapter()
{
	;
}

void Adapter::Request()
{
	this->SpecificRequest();
}
