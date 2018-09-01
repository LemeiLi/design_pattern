/*************************************************************************
	> File Name: abstract_factory.h
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 02 Aug 2018 04:39:50 PM CST
 ************************************************************************/

#ifndef _ABSTRACT_FACTORY_H
#define _ABSTRACT_FACTORY_H

class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
	virtual ~AbstractFactory();
	virtual AbstractProductA* CreateProductA() = 0;
	virtual AbstractProductA* CreateProductA() = 0;
protected:
	AbstractFactory();
private:
};

class ConcreteFactory1: public AbstractFactory
{
public:
	ConcreteFactory1();
	~ConcreteFactory1();
	AbstractProductA* CreateProductA();
	AbstractProductB* CreateProductB();
protected:

private:

};

class ConcreteFactory2: public AbstractFactory
{
public:
	ConcreteFactory2();
	~ConcreteFactory2();
	AbstractProductA* CreateProductA();
	AbstractProductB* CreateProductB();
protected:

private:
};
#endif // _ABSTRACT_FACTORY_H
