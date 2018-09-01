/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 03 Aug 2018 08:01:20 PM CST
 ************************************************************************/

#include<iostream>
#include "product.h"
#include "builder.h"
#include "director.h"

using namespace std;

int main(int argc, const char* argv[])
{
	Director* d = new Director(new ConcreteBuilder());
	d->Construct();
	return 0;
}


