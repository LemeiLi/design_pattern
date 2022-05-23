/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Mon 27 Aug 2018 07:03:15 PM CST
 ************************************************************************/

#include<iostream>
#include"mediator.hpp"
#include"colleage.hpp"

using namespace std;

int main()
{
	ConcreteMediator* cm = new ConcreteMediator();
	ConcreteColleageA* ca = new ConcreteColleageA(cm);
	ConcreteColleageB* cb = new ConcreteColleageB(cm);
	cm->IntroColleage(ca, cb);

	ca->SetState("old state");
	cb->SetState("old state");
	ca->Action();
	cb->Action();
	std::cout << std::endl;

	ca->SetState("new state");
	ca->Action();
	cb->Action();
	std::cout << std::endl;

	cb->SetState("old state");
	cb->Action();
	ca->Action();

	return 0;
}

