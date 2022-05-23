/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 29 Aug 2018 04:50:36 PM CST
 ************************************************************************/

#include<iostream>
#include"handle.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
	Handle* h1 = new ConcreteHandleA();
	Handle* h2 = new ConcreteHandleB();

	h1->SetHandler(h2);
	h2->SetHandler(h1); ///< Mwa-haha, passing the buck ecah other.

	h1->HandleRequest();

	return 0;
}
