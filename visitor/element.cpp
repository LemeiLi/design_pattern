/*************************************************************************
	> File Name: element.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 28 Aug 2018 05:57:32 PM CST
 ************************************************************************/

#include<iostream>
#include"element.hpp"
#include"visitor.hpp"

using namespace std;

Element::Element(){}

Element::~Element(){}

void Element::Accept(Visitor* vis){}

ConcreteElementA::ConcreteElementA(){}

ConcreteElementA::~ConcreteElementA(){}
 
void ConcreteElementA::Accept(Visitor* vis)
{
	vis->VisitConcreteElementA(this);
	std::cout << "visiting ConcreteElementA......" << std::endl;
}

ConcreteElementB::ConcreteElementB(){}

ConcreteElementB::~ConcreteElementB(){}
 
void ConcreteElementB::Accept(Visitor* vis)
{
	vis->VisitConcreteElementB(this);
	std::cout << "visiting ConcreteElementB......" << std::endl;
}

