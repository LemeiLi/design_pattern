/*************************************************************************
	> File Name: aggregate.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 30 Aug 2018 05:04:53 PM CST
 ************************************************************************/

#ifndef _AGGREGATE_HPP
#define _AGGREGATE_HPP

class Iterator;
typedef int Object;

class Aggregate
{
public:
	virtual ~Aggregate();
	virtual Iterator* CreateIterator() = 0;
	virtual Object GetItem(int idx) = 0;
	virtual int GetSize() = 0;
protected:
	Aggregate();
private:
};

class ConcreteAggregate: public Aggregate
{
public:
	enum {SIZE = 4};

	ConcreteAggregate();
	~ConcreteAggregate() override;
	Iterator* CreateIterator() override;
	Object GetItem(int idx) override;
	int GetSize()  override;
protected:
private:
	Object _objs[SIZE];
};

#endif // _AGGREGATE_HPP
