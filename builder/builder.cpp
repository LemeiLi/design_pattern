/*************************************************************************
	> File Name: builder.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 03 Aug 2018 05:06:01 PM CST
 ************************************************************************/

#include<iostream>
#include"builder.h"
#include"product.h"

using namespace std;

Builder::Builder()
{
	;
}

Builder::Builder()
{
	;
}

ConcreteBuilder::ConcreteBuilder()
{
	;
}

ConcreteBuilder::~ConcreteBuilder()
{
	;
}

void ConcreteBuilder::BuildPartA(const string& buildPara)
{
	std::cout << "step1: build partA......" << buildPara << std::endl;
}

void ConcreteBuilder::BuildPartB(const string& buildPara)
{
	std::cout << "step2: build partB......" << buildPara << std::endl;
}

void ConcreteBuilder::BuildPartC(const string& buildPara)
{
	std::cout << "step3: build partC......" << buildPara << std::endl;
}

Product* ConcreteBuilder::GetProduct()
{
	BuildPartA("pre-definedA");
	BuildPartB("pre-definedB");
	BuildPartC("pre-definedC");

	return new Product();
}

