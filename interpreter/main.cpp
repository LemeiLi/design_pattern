/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 31 Aug 2018 05:57:15 PM CST
 ************************************************************************/

#include<iostream>
#include"interpret.hpp"
#include"context.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	Context* c = new Context();
	AbstractExpression* te = new TerminalExpression("hello");
	AbstractExpression* nte = new NonterminalExpression(te, 2);
	nte->Interpret(*c);

	delete c, te, nte;

	return 0;
}

