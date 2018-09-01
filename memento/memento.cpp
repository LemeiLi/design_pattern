/*************************************************************************
	> File Name: memento.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 23 Aug 2018 04:23:09 PM CST
 ************************************************************************/

#include<iostream>
#include"memento.hpp"

using namespace std;

typedef std::string State;

Originator::Originator()
{
	_st = "";
	_mt = 0;
}

Originator::Originator(const State& st)
{
	_st = st;
	_mt = 0;
}

Originator::~Originator(){}

Memento* Originator::CreateMemento()
{
	return new Memento(_st);
}

State Originator::GetState()
{
	return _st;
}

void Originator::SetState(const State& st)
{
	_st = st;
}

void Originator::PrintState()
{
	std::cout << this->_st << std::endl;
}

void Originator::SetMemento(Memento* mt)
{
	_mt = mt;
}

void Originator::RestoreToMemento(Memento* mt)
{
	this->_st = mt->GetState();
}

Memento::Memento(){}

Memento::Memento(const State& st)
{
	_st = st;
}

State Memento::GetState()
{
	return _st;
}

void Memento::SetState(const State& st)
{
	_st = st;
}
