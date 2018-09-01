/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 21 Aug 2018 05:11:25 PM CST
 ************************************************************************/

#include<iostream>
#include"state.hpp"
#include"context.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
	State* st = new ConcreteStateA();
	Context* ct = new Context(st);
	std::cout << "----------------------------------------"<< std::endl ;
	ct->OperationChangeState();
	std::cout << std::endl;
	std::cout << "++++++++++++++++++++++++++++++++++++++++"<< std::endl ;
	ct->OperationChangeState();
	std::cout << std::endl;
	std::cout << "========================================"<< std::endl ;
	ct->OperationChangeState();

	delete ct;

	return 0;
}

