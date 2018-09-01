/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/mediator/colleage.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 24 Aug 2018 07:40:19 PM CST
 ************************************************************************/

#include<iostream>
#include"mediator.hpp"
#include"colleage.hpp"

using namespace std;

Colleage::Colleage(){}

Colleage::Colleage(Mediator* mdt)
{
	this->_mdt = mdt;
}

Colleage::~Colleage(){}

ConcreteColleageA::ConcreteColleageA(){}

ConcreteColleageA::ConcreteColleageA(Mediator* mdt): Colleage(mdt){}

ConcreteColleageA::~ConcreteColleageA(){}

std::string ConcreteColleageA::GetState()
{
	return _st;
}

void ConcreteColleageA::Action()
{
	_mdt->DoActionFromAtoB();
	std::cout << "state of ConcreteColleageA: " << this->GetState() << std::endl;
}

void ConcreteColleageA::SetState(const std::string& st)
{
	_st = st;
}

ConcreteColleageB::ConcreteColleageB(){}

ConcreteColleageB::ConcreteColleageB(Mediator* mdt): Colleage(mdt){}

ConcreteColleageB::~ConcreteColleageB(){}

std::string ConcreteColleageB::GetState()
{
	return _st;
}

void ConcreteColleageB::Action()
{
	_mdt->DoActionFromBtoA();
	std::cout << "state of ConcreteColleageB: " << this->GetState() << std::endl;
}

void ConcreteColleageB::SetState(const std::string& st)
{
	_st = st;
}
