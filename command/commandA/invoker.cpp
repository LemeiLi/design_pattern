/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/command_0827/invoker.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Mon 27 Aug 2018 07:45:26 PM CST
 ************************************************************************/

#include<iostream>
#include"command.hpp"
#include"invoker.hpp"

using namespace std;

Invoker::Invoker(Command* cmd)
{
	_cmd = cmd;
}

Invoker::~Invoker()
{
	delete _cmd;
}

void Invoker::Invoke()
{
	_cmd->Excute();
}

