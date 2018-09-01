/*************************************************************************
	> File Name: decorator.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 09 Aug 2018 02:47:21 PM CST
 ************************************************************************/

#ifndef _DECORATOR_HPP
#define _DECORATOR_HPP

class Component
{
public:
	virtual ~Component();
	virtual void Operation();
protected:
	Component();
private:

};

class ConcreteComponent: public Component
{
public:
	ConcreteComponent();
	~ConcreteComponent();
	void Operation();
protected:
private:
};

class Decorator: public Component
{
public:
	Decorator(Component* com);
	virtual ~Decorator();
	void Operation();
protected:
	Component* _com;
private:

};

class ConcreteDecorator: public Decorator
{
public:
	ConcreteDecorator(Component* com);
	~ConcreteDecorator();
	void Operation();
	void AddedBehavior();
protected:
private:
};
#endif // _DECORATOR_HPP
