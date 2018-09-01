/*************************************************************************
	> File Name: /home/lingmiao/xxdk/CherryBlossomIsBeautiful/iterator.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 30 Aug 2018 05:23:22 PM CST
 ************************************************************************/

#include<iostream>
#include"iterator.hpp"
#include"aggregate.hpp"
using namespace std;

Iterator::Iterator(){}
Iterator::~Iterator(){}

ConcreteIterator::ConcreteIterator(Aggregate* ag, int idx)
{
	this->_ag = ag;
	this->_idx = idx;
}

ConcreteIterator::~ConcreteIterator(){}

Object ConcreteIterator::CurrentItem()
{
	return _ag->GetItem(_idx);
}

void ConcreteIterator::First()
{
	_idx = 0;
}

void ConcreteIterator::Next()
{
	if (_idx < _ag->GetSize())
		_idx++;
}

bool ConcreteIterator::IsDone()
{
	return (_idx == _ag->GetSize());
}


