/*************************************************************************
	> File Name: flyweightFactory.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 14 Aug 2018 03:28:45 PM CST
 ************************************************************************/

#include<iostream>
#include"flyweightFactory.hpp"
#include<string>
#include<cassert>

using namespace std;

FlyweightFactory::FlyweightFactory(){}

FlyweightFactory::~FlyweightFactory(){}

Flyweight* FlyweightFactory::GetFlyweight(const string& key)
{
	vector<Flyweight*>::iterator it = _fly.begin();
	for(; it != _fly.end(); it++) {
		if((*it)->GetIntrinisicState() == key) {
			std::cout << "already created by users......" << std::endl;
			return *it;
		}
	}
	Flyweight* fn = new ConcreteFlyweight(key);
	_fly.push_back(fn);

	return fn;
}

