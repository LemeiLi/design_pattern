/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 16 Aug 2018 05:16:17 PM CST
 ************************************************************************/

#include<iostream>
#include"context.hpp"
#include"strategy.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	Strategy* psa = new ConcreteStrategyA();
	Strategy* psb = new ConcreteStrategyB();
	Context* pc = new Context(psa);
	pc->DoActaion();
	if(NULL != pc)
		delete pc;

	std::cout << endl;
	pc = new Context(psb);
	pc->DoActaion();
	if(NULL != pc)
		delete pc;

	return 0;
}

