/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Mon 27 Aug 2018 07:47:33 PM CST
 ************************************************************************/

#include<iostream>
#include"invoker.hpp"
#include"command.hpp"
#include"receiver.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	Receiver* rcv = new Receiver();
	Command* cmd = new ConcreteCommand(rcv);
	Invoker* inv = new Invoker(cmd);
	inv->Invoke();

	return 0;
}

