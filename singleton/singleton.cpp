/*************************************************************************
	> File Name: singleton.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 03 Aug 2018 03:14:00 PM CST
 ************************************************************************/

#include<iostream>
#include"singleton.h"

using namespace std;

Singleton* Singleton::_instance = 0;

Singleton::Singleton()
{
	std::cout << "singleton" << std::endl;
}

Singleton* Singleton::Instance()
{
	if(_instance == 0) {
		_instance = new Singleton();
	}
	return _instance;
}
