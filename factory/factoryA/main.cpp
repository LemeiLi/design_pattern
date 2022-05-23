/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 02 Aug 2018 03:57:46 PM CST
 ************************************************************************/

#include<iostream>
#include"factory.h"
#include"product.h"

using namespace std;


int main(int argc, const char* argv[])
{
	Factory* fac = new ConcreteFactory();
	Product* prd = fac->CreateProduct();
	return 0;
}

