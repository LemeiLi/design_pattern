/*************************************************************************
	> File Name: subject.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 22 Aug 2018 03:33:29 PM CST
 ************************************************************************/

#ifndef _SUBJECT_HPP
#define _SUBJECT_HPP

#include <list>
#include <string>

typedef std::string State;

class Observer;

class Subject
{
public:
	virtual ~Subject();
	virtual void Attach(Observer* obv);
	virtual void Detach(Observer* obv);
	virtual void Notify(); 
	virtual void SetState(const State& st) = 0;
	virtual State GetState() = 0;
protected:
	Subject();
private:
	std::list<Observer*> *_obvs;
};

class ConcreteSubject: public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject();
	State GetState() override;
	void SetState(const State& st) override;
protected:
private:
	State _st;
};

#endif // _SUBJECT_HPP
