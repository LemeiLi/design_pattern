/*************************************************************************
	> File Name: builder.h
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 03 Aug 2018 04:35:11 PM CST
 ************************************************************************/

#ifndef _BUILDER_H
#define _BUILDER_H

#include<string>
using namespace std;

class Product;

class Builder
{
public:
	virtual ~Builder();
	virtual void BuildPartA(const string& buildPara) = 0;
	virtual void BuildPartB(const string& buildPara) = 0;
	virtual void BuildPartC(const string& buildPara) = 0;
	virtual Product* GetProduct() = 0;
protected:
	Builder();
private:

};

class ConcreteBuilder: public Builder
{
public:
	ConcreteBuilder();
	~ConcreteBuilder();
	void BuildPartA(const string& buildPara);
	void BuildPartB(const string& buildPara);
	void BuildPartC(const string& buildPara);
	Product* GetProduct();
protected:

private:

};
#endif // _BUILDER_H
