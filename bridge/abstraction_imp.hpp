/*************************************************************************
	> File Name: abstraction_imp.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 07 Aug 2018 03:19:04 PM CST
 ************************************************************************/

#ifndef _ABSTRACTION_IMP_HPP
#define _ABSTRACTION_IMP_HPP

class AbstractionImp
{
public:
	virtual ~AbstractionImp();	
	virtual void Operation() = 0;

protected:
	AbstractionImp();
private:

};

class ConcreteAbstractionImpA: public AbstractionImp
{
public:
	ConcreteAbstractionImpA();
	~ConcreteAbstractionImpA();
	virtual void Operation();
protected:
private:

};

class ConcreteAbstractionImpB: public AbstractionImp
{
public:
	ConcreteAbstractionImpB();
	~ConcreteAbstractionImpB();
	virtual void Operation();
protected:
private:
};

#endif // _ABSTRACTION_IMP_HPP
