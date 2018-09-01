/*************************************************************************
	> File Name: observer.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 22 Aug 2018 03:54:14 PM CST
 ************************************************************************/

#ifndef _OBSERVER_HPP
#define _OBSERVER_HPP

#include "subject.hpp"

typedef std::string State;

class Observer
{
public:
	virtual ~Observer();
	virtual void Update(Subject* sub) = 0;
	virtual void PrintInfo() = 0;
protected:
	Observer();
	State _st;
private:
};

class ConcreteObserverA: public Observer
{
public:
	virtual Subject* GetSubject();
	ConcreteObserverA(Subject* sub);
	virtual ~ConcreteObserverA();
	void Update(Subject* sub) override;
	void PrintInfo() override;

protected:
private:
	Subject* _sub;
};

class ConcreteObserverB: public Observer
{
public:
	virtual Subject* GetSubject();
	ConcreteObserverB(Subject* sub);
	virtual ~ConcreteObserverB();
	void Update(Subject* sub) override;
	void PrintInfo() override;

protected:
private:
	Subject* _sub;
};

#endif // _OBSERVER_HPP
