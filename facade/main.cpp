/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 15 Aug 2018 05:16:47 PM CST
 ************************************************************************/

#include<iostream>
#include"facade.hpp"
using namespace std;

int main(int argc, const char* argv[])
{
	Facade* f = new Facade();
	f->OperationWrapper();

	return 0;
}

