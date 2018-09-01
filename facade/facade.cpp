/*************************************************************************
	> File Name: facade.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 15 Aug 2018 05:11:11 PM CST
 ************************************************************************/

#include<iostream>
#include"facade.hpp"

using namespace std;

Subsystem1::Subsystem1(){}

Subsystem1::~Subsystem1(){}

void Subsystem1::Operation()
{
	std::cout << "Subsystem1::Operation()......" << std::endl;
}

Subsystem2::Subsystem2(){}

Subsystem2::~Subsystem2(){}

void Subsystem2::Operation()
{
	std::cout << "Subsystem2::Operation()......" << std::endl;
}

Facade::Facade()
{
	this->_subs1 = new Subsystem1();
	this->_subs2 = new Subsystem2();
}

Facade::~Facade()
{
	delete _subs1;
	delete _subs2;
}

void Facade::OperationWrapper()
{
	this->_subs1->Operation();
	this->_subs2->Operation();
}

