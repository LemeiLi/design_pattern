/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 14 Aug 2018 03:39:04 PM CST
 ************************************************************************/

#include<iostream>
#include"flyweight.hpp"
#include"flyweightFactory.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
	FlyweightFactory* fc = new FlyweightFactory();
	Flyweight* fw1 = fc->GetFlyweight("hello");
	Flyweight* fw2= fc->GetFlyweight("world");
	Flyweight* fw3= fc->GetFlyweight("hello");

	return 0;
}

