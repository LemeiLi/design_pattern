/*************************************************************************
	> File Name: director.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 03 Aug 2018 07:58:21 PM CST
 ************************************************************************/

#include<iostream>
#include"director.h"
#include"builder.h"
using namespace std;

Director::Director(Builder* bld)
{
	_bld = bld;
}
Director::~Director()
{
	;
}

void Director::Construct()
{
	_bld->BuildPartA("user-defined A");
	_bld->BuildPartB("user-defined B");
	_bld->BuildPartC("user-defined C");
}
