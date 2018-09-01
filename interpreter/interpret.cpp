/*************************************************************************
	> File Name: /home/lingmiao/xxdk/CherryBlossomIsBeautiful/interpreter/interpret.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 31 Aug 2018 05:50:27 PM CST
 ************************************************************************/

#include<iostream>
#include"interpret.hpp"

using namespace std;

AbstractExpression::AbstractExpression(){}

AbstractExpression::~AbstractExpression(){}

void AbstractExpression::Interpret(const Context& c)
{}

TerminalExpression::TerminalExpression(const std::string& statement)
{
	this->_statement = statement;
}

TerminalExpression::~TerminalExpression(){}

void TerminalExpression::Interpret(const Context& c)
{
	std::cout << this->_statement << " TerminalExpression" << std::endl;
}

NonterminalExpression::NonterminalExpression(AbstractExpression* expression, int times)
{
	this->_expression = expression;
	this->_times = times;
}

NonterminalExpression::~NonterminalExpression(){}

void NonterminalExpression::Interpret(const Context& c)
{
	for (int i = 0; i < _times; i++) {
		this->_expression->Interpret(c);
	}
}
