/*************************************************************************
	> File Name: command.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Mon 27 Aug 2018 07:39:19 PM CST
 ************************************************************************/

#include<iostream>
#include"receiver.hpp"
#include"command.hpp"

using namespace std;

Command::Command(){}

Command::~Command(){}

void Command::Excute(){}

ConcreteCommand::ConcreteCommand(Receiver* rcv)
{
	this->_rcv = rcv;
}

ConcreteCommand::~ConcreteCommand()
{
	delete this->_rcv;
}

void ConcreteCommand::Excute()
{
	_rcv->Action();
	std::cout << "ConcreteCommand::Excute()......" << std::endl;
}

