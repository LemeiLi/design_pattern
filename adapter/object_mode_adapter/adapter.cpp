/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/adapter/object_mode_adapter/adapter.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 08 Aug 2018 04:14:52 PM CST
 ************************************************************************/

#include<iostream>
#include"adapter.hpp"

using namespace std;

Target::Target(){}

Target::~Target(){}

void Target::Request()
{
	std::cout << "Target::Request" << std::endl;
}

Adaptee::Adaptee(){}

Adaptee::~Adaptee(){}

void Adaptee::SpecificRequest()
{
	std::cout << "Adaptee::SpecificRequest"<< std::endl;
}
Adapter::Adapter(Adaptee* ade)
{
	this->_ade = ade;
}

Adapter::~Adapter(){}

void Adapter::Request()
{
	_ade->SpecificRequest();
}

