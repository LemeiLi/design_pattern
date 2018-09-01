/*************************************************************************
	> File Name: strategy.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 16 Aug 2018 05:02:01 PM CST
 ************************************************************************/

#ifndef _STRATEGY_HPP
#define _STRATEGY_HPP

class Strategy
{
public:
	Strategy();
	virtual ~Strategy();
	virtual void AlgrithmInterface() = 0;
protected:
private:
};

class ConcreteStrategyA: public Strategy
{
public:
	ConcreteStrategyA();
	virtual ~ConcreteStrategyA();
	void AlgrithmInterface() override;
protected:
private:
};

class ConcreteStrategyB: public Strategy 
{
public:
	ConcreteStrategyB();
	virtual ~ConcreteStrategyB();
	void AlgrithmInterface() override;
};

#endif // _STRATEGY_HPP
