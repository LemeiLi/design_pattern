/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/visitor/visitor.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 28 Aug 2018 05:43:25 PM CST
 ************************************************************************/

#include<iostream>
#include"visitor.hpp"
#include"element.hpp"

using namespace std;

Visitor::Visitor(){}

Visitor::~Visitor(){}

ConcreteVisitorA::ConcreteVisitorA() {}

ConcreteVisitorA::~ConcreteVisitorA() {}

void ConcreteVisitorA::VisitConcreteElementA(Element* elm)
{
	std::cout << "I will visit ConcreteElementA......" << std::endl;
}

void ConcreteVisitorA::VisitConcreteElementB(Element* elm)
{
	std::cout << "I will visit ConcreteElementB......" << std::endl;
}

ConcreteVisitorB::ConcreteVisitorB() {}

ConcreteVisitorB::~ConcreteVisitorB() {}

void ConcreteVisitorB::VisitConcreteElementA(Element* elm)
{
	std::cout << "I will visit ConcreteElementA......" << std::endl;
}

void ConcreteVisitorB::VisitConcreteElementB(Element* elm)
{
	std::cout << "I will visit ConcreteElementB......" << std::endl;
}
