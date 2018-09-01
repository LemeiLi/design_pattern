/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Mon 13 Aug 2018 04:26:25 PM CST
 ************************************************************************/

#include<iostream>
#include"component.hpp"
#include"composite.hpp"
#include"leaf.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
	Leaf* lf1 = new Leaf();
	lf1->Operation();

	Leaf* lf2 = new Leaf();
	lf2->Operation();

	Composite* com = new Composite();
	com->Add(lf1);
	com->Add(lf2);
	com->Operation();
	Component* lc = com->GetChild(0);
	lc->Operation();
	lc = com->GetChild(1);
	lc->Operation();

	return 0;
}


