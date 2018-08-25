/*************************************************************************
	> File Name: factory.h
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 02 Aug 2018 03:28:47 PM CST
 ************************************************************************/

#ifndef _FACTORY_H
#define _FACTORY_H

class Product;

class Factory
{
public:
	virtual ~Factory() = 0;
	virtual Product* CreateProduct() = 0;
protected:
	Factory();
private:
	
};

class ConcreteFactory: public Factory
{
public:
	~ConcreteFactory();
	ConcreteFactory();
	Product* CreateProduct();

protected:
	
private:

};

#endif // _FACTORY_H
