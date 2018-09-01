/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/state/context.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 21 Aug 2018 04:58:39 PM CST
 ************************************************************************/

#include<iostream>
#include"context.hpp"
#include"state.hpp"

using namespace std;

Context::Context(){}

Context::~Context()
{
	delete _state;
}

Context::Context(State* state)
{
	this->_state = state;
}

void Context::OperationInterface()
{
	_state->OperationInterface(this);
}

bool Context::ChangeState(State* state)
{
	std::cout<< "4. Context::ChangeState(State* state): _state = state" << std::endl;
	this->_state = state;
	std::cout << "Context current state: ";
	_state->CurrentState();

	return true;
}

void Context::OperationChangeState()
{
	std::cout << "Context current state: ";
	_state->CurrentState();
	std::cout << "1. Context::OperationChangeState(): _state->OperationChangeState(this)" << std::endl;
	_state->OperationChangeState(this);
}
