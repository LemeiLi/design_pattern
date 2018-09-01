/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 30 Aug 2018 05:29:08 PM CST
 ************************************************************************/

#include<iostream>
#include"iterator.hpp"
#include"aggregate.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	Aggregate* ag = new ConcreteAggregate();
	Iterator* it = new ConcreteIterator(ag, 0);

	for (; !(it->IsDone()); it->Next()) {
		std::cout << it->CurrentItem() << std::endl;	
	}
} 

