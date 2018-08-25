/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 07 Aug 2018 03:38:57 PM CST
 ************************************************************************/

#include<iostream>
#include"abstraction.h"
#include"abstraction_imp.hpp"
using namespace std;

int main(int argc, char* argv[])
{
	std::cout << "create a ConcreteAbstractionImpA object" << std::endl;
	AbstractionImp* imp = new ConcreteAbstractionImpA();
	Abstraction* abs = new RefinedAbstraction(imp);
	abs->Operation();

	return 0;
}

