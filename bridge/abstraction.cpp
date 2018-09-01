/*************************************************************************
	> File Name: abstraction.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 07 Aug 2018 03:10:16 PM CST
 ************************************************************************/

#include<iostream>
#include"abstraction.h"
#include"abstraction_imp.hpp"
using namespace std;

Abstraction::Abstraction()
{
	;		
}

Abstraction::~Abstraction()
{
	;		
}

RefinedAbstraction::RefinedAbstraction(AbstractionImp* imp)
{
	std::cout << "private member: _imp  = imp" << std::endl;
	_imp = imp;
}

RefinedAbstraction::~RefinedAbstraction()
{
	;	
}

void RefinedAbstraction::Operation()
{
	std::cout << "RefinedAbstraction::Operation --> _imp->Operation()" << std::endl;
	_imp->Operation();
}
