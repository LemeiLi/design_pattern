/*************************************************************************
	> File Name: interpret.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 31 Aug 2018 05:40:26 PM CST
 ************************************************************************/

#ifndef _INTERPRET_HPP
#define _INTERPRET_HPP

#include"context.hpp"
#include<string>

class AbstractExpression
{
public:
	virtual ~AbstractExpression();
	virtual void Interpret(const Context& c);
protected:
	AbstractExpression();
private:
};

class TerminalExpression: public AbstractExpression
{
public:
	TerminalExpression(const std::string& statement);
	~TerminalExpression();
	void Interpret(const Context& c);
protected:
private:
	std::string _statement;
};

class NonterminalExpression: public AbstractExpression
{
public:
	NonterminalExpression(AbstractExpression* expression, int times);
	~NonterminalExpression();
	void Interpret(const Context& c);
protected:
private:
	AbstractExpression* _expression;
	int _times;
};


#endif // _INTERPRET_HPP
