/*************************************************************************
	> File Name: visitor.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 28 Aug 2018 05:36:58 PM CST
 ************************************************************************/

#ifndef _VISITOR_HPP
#define _VISITOR_HPP

class ConcreteElementA;
class ConcreteElementB;
class Element;

class Visitor
{
public:
	virtual ~Visitor();
	virtual void VisitConcreteElementA(Element* elm) = 0;
	virtual void VisitConcreteElementB(Element* elm) = 0;
protected:
	Visitor();
private:
};

class ConcreteVisitorA: public Visitor
{
public:
	ConcreteVisitorA();
	virtual ~ConcreteVisitorA();
	virtual void VisitConcreteElementA(Element* elm) override;
	virtual void VisitConcreteElementB(Element* elm) override;
protected:
private:
};

class ConcreteVisitorB: public Visitor
{
public:
	ConcreteVisitorB();
	virtual ~ConcreteVisitorB();
	virtual void VisitConcreteElementA(Element* elm) override;
	virtual void VisitConcreteElementB(Element* elm) override;
protected:
private:
};

#endif // _VISITOR_HPP
