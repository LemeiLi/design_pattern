/*************************************************************************
	> File Name: template.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 16 Aug 2018 04:18:10 PM CST
 ************************************************************************/

#ifndef _TEMPLATE_HPP
#define _TEMPLATE_HPP

class AbstractClass
{
public:
	virtual ~AbstractClass();
	void TemplateMethod();
protected:
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
	AbstractClass();
private:
};

class ConcreteClass1: public AbstractClass
{
public:
	ConcreteClass1();
	~ConcreteClass1();
protected:
	void PrimitiveOperation1() override;
	void PrimitiveOperation2() override;
private:

};

class ConcreteClass2: public AbstractClass
{
public:
	ConcreteClass2();
	~ConcreteClass2();
protected:
	void PrimitiveOperation1() override;
	void PrimitiveOperation2() override;
private:

};
#endif // _TEMPLATE_HPP
