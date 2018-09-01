/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 08 Aug 2018 03:34:41 PM CST
 ************************************************************************/

#include<iostream>
#include"adapter.hpp"

using namespace std;

int main()
{
	Target* adt = new Adapter();
	adt->Request();

	return 0;
}
