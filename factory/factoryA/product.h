/*************************************************************************
	> File Name: product.h
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 02 Aug 2018 03:20:32 PM CST
 ************************************************************************/

#ifndef _PRODUCT_H
#define _PRODUCT_H

class Product 
{
public:
	virtual ~Product() = 0;
protected:
	Product();
private:

};

class ConcreteProduct: public Product
{
public:
	~ConcreteProduct();
	ConcreteProduct();
protected:

private:
};

#endif // _PRODUCT_H
