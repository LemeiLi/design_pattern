/*************************************************************************
	> File Name: /home/lingmiao/xxdk/design/command_0828/command.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 28 Aug 2018 03:37:46 PM CST
 ************************************************************************/

#include<iostream>
#include"command.hpp"
#include"receiver.hpp"

using namespace std;

Command::Command(){}

Command::~Command(){}

void Command::Excute() 
{
	std::cout << "Command::Excute()" << std::endl;
}

template<typename T>
SimpleCommand<T>::SimpleCommand(T* rcv, void (T::* act)())
{
	_rcv = rcv;
	_act = act;
}

template<typename T>
void SimpleCommand<T>::Excute()
{
	(_rcv->*_act)(); ///< member pointer function
}

template<typename T>
SimpleCommand<T>::~SimpleCommand()
{
	delete _rcv;
}

/**< Explicit declaration template instance */
template class SimpleCommand<Receiver>;



