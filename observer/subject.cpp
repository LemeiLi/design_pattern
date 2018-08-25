/*************************************************************************
	> File Name: subject.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 22 Aug 2018 03:41:36 PM CST
 ************************************************************************/

#include<list>
#include<iostream>
#include"subject.hpp"
#include"observer.hpp"

using namespace std;
typedef string State;

Subject::Subject()
{
	_obvs = new list<Observer*>;
}

Subject::~Subject(){}

void Subject::Attach(Observer* obv)
{
	_obvs->push_front(obv);
}

void Subject::Detach(Observer* obv)
{
	if (obv != NULL)
		_obvs->remove(obv);
}

void Subject::Notify()
{
	list<Observer*>::iterator itor;	
	itor = _obvs->begin();

	for (; itor != _obvs->end(); itor++) {
		(*itor)->Update(this);
	}
}

ConcreteSubject::ConcreteSubject()
{
	_st = '\0';
}

ConcreteSubject::~ConcreteSubject(){}

State ConcreteSubject::GetState()
{
	return _st;
}

void ConcreteSubject::SetState(const State& st)
{
	_st = st;
}

