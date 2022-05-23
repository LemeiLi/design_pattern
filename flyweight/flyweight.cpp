/*************************************************************************
	> File Name: flyweight.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 14 Aug 2018 03:16:51 PM CST
 ************************************************************************/

#include<iostream>
#include"flyweight.hpp"
using namespace std;

Flyweight::Flyweight(string intrinsicState)
{
	this->_intrinsicState = intrinsicState;
}

Flyweight::~Flyweight(){}

void Flyweight::Operation(const string& extrinsicState){}

string Flyweight::GetIntrinisicState()
{
	return this->_intrinsicState;
}

ConcreteFlyweight::ConcreteFlyweight(string intrinsicState):
	Flyweight(intrinsicState)
{
	std::cout << "ConcreteFlyweight build......" << std::endl;
}

ConcreteFlyweight::~ConcreteFlyweight()
{

}

void ConcreteFlyweight::Operation(const string& extrinsicState)
{
	std::cout << "ConcreteFlyweight: inter[" << this->GetIntrinisicState() << "], exter[" << extrinsicState << "]" << std::endl;
}
