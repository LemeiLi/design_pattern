/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/command_0827/receiver.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Mon 27 Aug 2018 07:30:30 PM CST
 ************************************************************************/

#include<iostream>
#include"receiver.hpp"

using namespace std;

Receiver::Receiver(){}

Receiver::~Receiver(){}

void Receiver::Action()
{
	std::cout << "Receiver::action()......" << std::endl;
}

