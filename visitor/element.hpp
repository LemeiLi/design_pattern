/*************************************************************************
	> File Name: element.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 28 Aug 2018 05:50:14 PM CST
 ************************************************************************/

#ifndef _ELEMENT_HPP
#define _ELEMENT_HPP

class Visitor;

class Element
{
public:
	virtual ~Element();
	virtual void Accept(Visitor* vis) = 0;
protected:
	Element();
private:
};

class ConcreteElementA: public Element
{
public:
	ConcreteElementA();
	~ConcreteElementA();
	void Accept(Visitor* vis) override;
protected:
private:
};

class ConcreteElementB: public Element
{
public:
	ConcreteElementB();
	~ConcreteElementB();
	void Accept(Visitor* vis) override;
protected:
private:
};

#endif // _ELEMENT_HPP
