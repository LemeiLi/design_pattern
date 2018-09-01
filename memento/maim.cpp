/*************************************************************************
	> File Name: maim.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 23 Aug 2018 04:32:18 PM CST
 ************************************************************************/

#include<iostream>
#include"memento.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
	Originator* org = new Originator();
	org->SetState("old state");
	org->PrintState();

	Memento* mt = org->CreateMemento(); ///< create memento for Originator.
	org->SetMemento(mt);
	org->SetState("new state");
	org->PrintState();

	org->RestoreToMemento(mt);           ///< restore state.
	org->PrintState();

	return 0;
}
