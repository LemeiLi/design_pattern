/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/chain_of_responsibility_0829/handle.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 29 Aug 2018 04:41:04 PM CST
 ************************************************************************/

#include<iostream>
#include"handle.hpp"

using namespace std;

Handle:: Handle() 
{
	_handler = 0;
}

Handle::~Handle()
{
	delete _handler;
}

Handle::Handle(Handle* handler)
{
	this->_handler = handler;
}

void Handle::SetHandler(Handle* handler)
{
	_handler = handler;
}

Handle* Handle::GetHandler()
{
	return _handler;
}

void Handle::HandleRequest(){}

ConcreteHandleA::ConcreteHandleA(){}

ConcreteHandleA::~ConcreteHandleA(){}

ConcreteHandleA::ConcreteHandleA(Handle* handler){}

void ConcreteHandleA::HandleRequest()
{
	if(this->GetHandler() != 0) {
		std::cout << "ConcreteHandleA give handle right to next handler" << std::endl;
		this->GetHandler()->HandleRequest();
	} else {
		std::cout << "ConcreteHandleA has no next handler, handle request by myself" << std::endl;
	}
}

ConcreteHandleB::ConcreteHandleB(){}

ConcreteHandleB::~ConcreteHandleB(){}

ConcreteHandleB::ConcreteHandleB(Handle* handler){}

void ConcreteHandleB::HandleRequest()
{
	if(this->GetHandler() != 0) {
		std::cout << "ConcreteHandleB give handle right to next handler" << std::endl;
		this->GetHandler()->HandleRequest();
	} else {
		std::cout << "ConcreteHandleB has no next handler, handle request by myself" << std::endl;
	}
}

