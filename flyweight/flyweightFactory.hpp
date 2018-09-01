/*************************************************************************
	> File Name: flyweightFactory.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 14 Aug 2018 03:24:54 PM CST
 ************************************************************************/

#ifndef _FLYWEIGHTFACTORY_HPP
#define _FLYWEIGHTFACTORY_HPP

#include "flyweight.hpp"
#include <string>
#include <vector>

class FlyweightFactory
{
public:
	FlyweightFactory();
	~FlyweightFactory();
	Flyweight* GetFlyweight(const std::string& key);
protected:
private:
	std::vector<Flyweight*> _fly;
};
#endif // _FLYWEIGHTFACTORY_HPP
