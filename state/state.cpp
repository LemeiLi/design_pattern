/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/state/state.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 21 Aug 2018 04:45:45 PM CST
 ************************************************************************/

#include<iostream>
#include"state.hpp"
#include"context.hpp"

using namespace std;

State::State(){}

State::~State(){}

void State::OperationInterface(Context* con)
{
	std::cout << "State::OperationInterface()......" << std::endl;
}

bool State::ChangeState(Context* con, State* st)
{
	std::cout <<"3. State::ChangeState(Context* con, State* st): con->ChangeState(st)" << std::endl;
	con->ChangeState(st);
	return true;
}

void State::OperationChangeState(Context* con){}


ConcreteStateA::ConcreteStateA(){}

ConcreteStateA::~ConcreteStateA(){}

void ConcreteStateA::CurrentState()
{
	std::cout << "ConcreteStateA" << std::endl;
}

void ConcreteStateA::OperationInterface(Context* con)
{
	std::cout << "        ConcreteStateA Operation......" << std::endl;
}

void ConcreteStateA::OperationChangeState(Context* con)
{
	std::cout << "2. ConcreteStateA::OperationChangeState(Context* con):" << std::endl;
	std::cout << "    2.1 ConcreteStateA::OperationInterface(con): OperationInterface(con)" << std::endl;
	OperationInterface(con);
	std::cout << "    2.2 ConcreteStateA::ChangeState(con, new ConcreteStateB())" << std::endl;
	this->ChangeState(con, new ConcreteStateB());
}

ConcreteStateB::ConcreteStateB(){}

ConcreteStateB::~ConcreteStateB(){}

void ConcreteStateB::CurrentState()
{
	std::cout << "ConcreteStateB" << std::endl;
}

void ConcreteStateB::OperationInterface(Context* con)
{
	std::cout << "        ConcreteStateB Operation......" << std::endl;
}

void ConcreteStateB::OperationChangeState(Context* con)
{
	std::cout << "2. ConcreteStateB::OperationChangeState(Context* con):" << std::endl;
	std::cout << "    2.1 ConcreteStateB::OperationInterface(con): OperationInterface(con)" << std::endl;
	OperationInterface(con);
	std::cout << "    2.2 ConcreteStateB::ChangeState(con, new ConcreteStateC())" << std::endl;
	this->ChangeState(con, new ConcreteStateC());
}

ConcreteStateC::ConcreteStateC(){}

ConcreteStateC::~ConcreteStateC(){}

void ConcreteStateC::CurrentState()
{
	std::cout << "ConcreteStateC" << std::endl;
}

void ConcreteStateC::OperationInterface(Context* con)
{
	std::cout << "        ConcreteStateC Operation......" << std::endl;
}

void ConcreteStateC::OperationChangeState(Context* con)
{
	std::cout << "2. ConcreteStateC::OperationChangeState(Context* con):" << std::endl;
	std::cout << "    2.1 ConcreteStateC::OperationInterface(con): OperationInterface(con)" << std::endl;
	OperationInterface(con);
	std::cout << "    2.2 ConcreteStateC::ChangeState(con, new ConcreteStateA())" << std::endl;
	this->ChangeState(con, new ConcreteStateA());
}
