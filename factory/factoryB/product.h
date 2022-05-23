/*************************************************************************
	> File Name: product.h
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 02 Aug 2018 03:20:32 PM CST
 ************************************************************************/

#ifndef _PRODUCT_H
#define _PRODUCT_H

class AbstractProductA
{
public:
	virtual ~AbstractProductA();

protected:
	AbstractProductA();
private:

};

class AbstractProductB
{
public:
	virtual ~AbstractProductB();

protected:
	AbstractProductB();
private:

};

class ConcreteProductA1: public AbstractProductA 
{
public:
	~ConcreteProductA1();
	ConcreteProductA1();
protected:

private:
};

class ConcreteProductA2: public AbstractProductA
{
public:
	~ConcreteProductA2();
	ConcreteProductA2();
protected:

private:
};

class ConcreteProductB1: public AbstractProductB 
{
public:
	~ConcreteProductB1();
	ConcreteProductB1();
protected:

private:
};

class ConcreteProductB2: public AbstractProductB 
{
public:
	~ConcreteProductB2();
	ConcreteProductB2();
protected:

private:
};

#endif // _PRODUCT_H
