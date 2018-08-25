/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 22 Aug 2018 04:55:04 PM CST
 ************************************************************************/

#include<iostream>
#include"subject.hpp"
#include"observer.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
	ConcreteSubject* sub = new ConcreteSubject();
	Observer* ob1 = new ConcreteObserverA(sub);
	Observer* ob2 = new ConcreteObserverB(sub);

	std::cout << "1. publish old state" << std::endl;
	sub->SetState("_old state......");
	sub->Notify();
	std::cout << std::endl;
	std::cout << "2. publish new state" << std::endl;
	sub->SetState("_new state......");
	sub->Notify();

	return 0;
}
