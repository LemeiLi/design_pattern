/*************************************************************************
	> File Name: /home/lingmiao/xxdk/CherryBlossomIsBeautiful/aggregate.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 30 Aug 2018 05:10:47 PM CST
 ************************************************************************/

#include<iostream>
#include"aggregate.hpp"
#include"iterator.hpp"

using namespace std;

Aggregate::Aggregate(){}

Aggregate::~Aggregate(){}

ConcreteAggregate::ConcreteAggregate()
{
	for (int i = 0; i < SIZE; i++) {
		_objs[i] = i;
	}
}

ConcreteAggregate::~ConcreteAggregate(){}

Iterator* ConcreteAggregate::CreateIterator()
{
	return new ConcreteIterator(this, 0);
}

Object ConcreteAggregate::GetItem(int idx)
{
	if (idx < this->GetSize())
		return _objs[idx];
	else 
		return -1;
}

int ConcreteAggregate::GetSize()
{
	return SIZE;
}


