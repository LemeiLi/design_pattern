/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 28 Aug 2018 03:32:45 PM CST
 ************************************************************************/

#include<iostream>
#include"command.hpp"
#include"receiver.hpp"

using namespace std;


int main(int argc, const char* argv[])
{
	Receiver* rcv = new Receiver();

	Command* cmd = new SimpleCommand<Receiver>(rcv, &Receiver::Action);
	cmd->Excute();

	return 0;
}

