/*************************************************************************
	> File Name: flyweight.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 14 Aug 2018 03:09:02 PM CST
 ************************************************************************/

#ifndef _FLYWEIGHT_HPP
#define _FLYWEIGHT_HPP

#include <string>

class Flyweight
{
public:
	virtual ~Flyweight();
	virtual void Operation(const std::string& extrinsicState);
	std::string GetIntrinisicState();
protected:
	Flyweight(std::string intrinsicState);
private:
	std::string _intrinsicState;
};

class ConcreteFlyweight: public Flyweight
{
public:
	ConcreteFlyweight(std::string intrinsicState);
	~ConcreteFlyweight();
	void Operation(const std::string& extrinsicState);
protected:
private:
};
#endif // _FLYWEIGHT_HPP
