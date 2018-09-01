/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/observer/observer.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 22 Aug 2018 04:04:37 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include"observer.hpp"
#include"subject.hpp"

using namespace std;

Observer::Observer()
{
	_st = '\0';
}

Observer::~Observer(){}

ConcreteObserverA::ConcreteObserverA(Subject* sub)
{
	_sub = sub;	
	_sub->Attach(this);
}

ConcreteObserverA::~ConcreteObserverA()
{
	_sub->Detach(this);

	if (_sub != 0) {
		delete _sub;
	}
}

Subject* ConcreteObserverA::GetSubject()
{
	return _sub;
}

void ConcreteObserverA::PrintInfo()
{
	std::cout << "ConcreteObserverA observer: " << _st << std::endl;
}

void ConcreteObserverA::Update(Subject* sub)
{
	_st = sub->GetState();
	PrintInfo();
}

ConcreteObserverB::ConcreteObserverB(Subject* sub)
{
	_sub = sub;	
	_sub->Attach(this);
}

ConcreteObserverB::~ConcreteObserverB()
{
	_sub->Detach(this);

	if (_sub != 0) {
		delete _sub;
	}
}

Subject* ConcreteObserverB::GetSubject()
{
	return _sub;
}

void ConcreteObserverB::PrintInfo()
{
	std::cout << "ConcreteObserverB observer: " << _st << std::endl;
}

void ConcreteObserverB::Update(Subject* sub)
{
	_st = sub->GetState();
	PrintInfo();
}



