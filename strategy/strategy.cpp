/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/strategy/strategy.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 16 Aug 2018 05:06:20 PM CST
 ************************************************************************/

#include<iostream>
#include"strategy.hpp"

using namespace std;

Strategy::Strategy(){}

Strategy::~Strategy()
{
	std::cout << "Strategy::~Strategy()......" << std::endl;
}

void Strategy::AlgrithmInterface(){}

ConcreteStrategyA::ConcreteStrategyA(){}

ConcreteStrategyA::~ConcreteStrategyA()
{
	std::cout << "ConcreteStrategyA::~ConcreteStrategyA()......" << std::endl;
}

void ConcreteStrategyA::AlgrithmInterface()
{
	std::cout << "ConcreteStrategyA::AlgrithmInterface()......" << std::endl;
}

ConcreteStrategyB::ConcreteStrategyB(){}

ConcreteStrategyB::~ConcreteStrategyB()
{
	std::cout << "ConcreteStrategyB::~ConcreteStrategyB()......" << std::endl;
}

void ConcreteStrategyB::AlgrithmInterface()
{
	std::cout << "ConcreteStrategyB::AlgrithmInterface()......" << std::endl;
}



