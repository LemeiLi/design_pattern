/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/bridge/abstraction_imp.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 07 Aug 2018 03:19:07 PM CST
 ************************************************************************/

#include<iostream>
#include"abstraction_imp.hpp"
using namespace std;

AbstractionImp::AbstractionImp()
{
	;
}

AbstractionImp::~AbstractionImp()
{
	;
}

void AbstractionImp::Operation()
{
	std::cout <<"AbstractionImp......Operation()" << endl;
}

ConcreteAbstractionImpA::ConcreteAbstractionImpA()
{
	;
}

ConcreteAbstractionImpA::~ConcreteAbstractionImpA()
{
	;
}

void ConcreteAbstractionImpA::Operation()
{
	std::cout << "ConcreteAbstractionImpA......Operation()" << std::endl;
}

ConcreteAbstractionImpB::ConcreteAbstractionImpB()
{
	;
}

ConcreteAbstractionImpB::~ConcreteAbstractionImpB()
{
	;
}

void ConcreteAbstractionImpB::Operation()
{
	std::cout << "ConcreteAbstractionImpB......Operation()" << std::endl;
}
