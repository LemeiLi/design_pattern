/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/strategy/context.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 16 Aug 2018 05:25:01 PM CST
 ************************************************************************/

#include<iostream>
#include"context.hpp"
#include"strategy.hpp"

using namespace std;

Context::Context(Strategy* stg)
{
	_stg = stg;
}

Context::~Context()
{
	std::cout << "context::~context()......" << std::endl;
	if(_stg)
		delete _stg;
}

void Context::DoActaion()
{
	_stg->AlgrithmInterface();
}

