/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 28 Aug 2018 06:03:16 PM CST
 ************************************************************************/

#include<iostream>
#include"visitor.hpp"
#include"element.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	Visitor* vis = new ConcreteVisitorA();
	Element* elm = new ConcreteElementA();
	elm->Accept(vis);

	return 0;
}

