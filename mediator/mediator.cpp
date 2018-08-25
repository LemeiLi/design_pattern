/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/mediator/mediator.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 24 Aug 2018 07:57:58 PM CST
 ************************************************************************/

#include<iostream>
#include"mediator.hpp"
#include"colleage.hpp"

using namespace std;

Mediator::Mediator(){}

Mediator::~Mediator(){}

ConcreteMediator::ConcreteMediator(Colleage* clgA, 
								   Colleage* clgB)
{
	this->_clgA = clgA;
	this->_clgB = clgB;
}

void ConcreteMediator::DoActionFromAtoB()
{
	_clgB->SetState(_clgA->GetState());
}

void ConcreteMediator::SetConcreteColleageA(Colleage* clgA)
{
	this->_clgA = clgA;
}

void ConcreteMediator::SetConcreteColleageB(Colleage* clgB)
{
	this->_clgB= clgB;
}

Colleage* Colleage::GetConcreteColleageA()
{
	return _clgA;
}

Colleage* Colleage::GetConcreteColleageB()
{
	return _clgB;
}

void ConcreteMediator::IntroColleage(Colleage* clgA,
		Colleage* clgB)
{
	this->_clgA = clgA;
	this->_clgB = clgB;
}

void ConcreteMediator::DoActionFromBtoA():
{
	_clgA->SetState(_clgB->GetState());
}

