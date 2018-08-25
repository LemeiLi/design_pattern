/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/decorator/decorator.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 09 Aug 2018 03:13:40 PM CST
 ************************************************************************/

#include<iostream>
#include"decorator.hpp"

using namespace std;

Component::Component(){}

Component::~Component(){}

void Component::Operation(){}

ConcreteComponent::ConcreteComponent(){}

ConcreteComponent::~ConcreteComponent(){}

void ConcreteComponent::Operation()
{
	std::cout << "ConcreteComponent::Operation" << std::endl;
}

Decorator::Decorator(Component* com)
{
	this->_com = com;
}

Decorator::~Decorator()
{
	delete _com;
}

void Decorator::Operation(){}

ConcreteDecorator::ConcreteDecorator(Component* com): Decorator(com){}

ConcreteDecorator::~ConcreteDecorator(){}

void ConcreteDecorator::AddedBehavior()
{
	std::cout << "ConcreteDecorator::AddedBehavior......" << std::endl;
}

void ConcreteDecorator::Operation()
{
	_com->Operation();
	this->AddedBehavior();
}
