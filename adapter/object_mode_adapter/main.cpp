/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 08 Aug 2018 04:19:31 PM CST
 ************************************************************************/

#include<iostream>
#include"adapter.hpp"

using namespace std;

int main()
{
	Adaptee* ade = new Adaptee();
	Target* adt = new Adapter(ade);
	adt->Request();

	return 0;
}
