/*************************************************************************
	> File Name: iterator.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 30 Aug 2018 05:18:50 PM CST
 ************************************************************************/

#ifndef _ITERATOR_HPP
#define _ITERATOR_HPP

class Aggregate;
typedef int Object;

class Iterator
{
public:
	virtual ~Iterator();
	virtual void First() = 0;
	virtual void Next() = 0;
	virtual bool IsDone() = 0;
	virtual Object CurrentItem() = 0;

protected:
	Iterator();
private:
};

class ConcreteIterator: public Iterator
{
public:
	ConcreteIterator(Aggregate* ag, int idx);
	~ConcreteIterator() override;
	
	void First() override;
	void Next() override;
	bool IsDone() override;
	Object CurrentItem() override;

protected:
private:
	Aggregate* _ag;
	int _idx;
};
#endif // _ITERATOR_HPP

