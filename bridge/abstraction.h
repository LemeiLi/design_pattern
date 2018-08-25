/*************************************************************************
	> File Name: abstraction.h
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 07 Aug 2018 03:03:55 PM CST
 ************************************************************************/

#ifndef _ABSTRACTION_H
#define _ABSTRACTION_H

class AbstractionImp;

class Abstraction
{
public:
	virtual ~Abstraction();
	virtual void Operation() = 0;
protected:
	Abstraction();
private:

};

class RefinedAbstraction: public Abstraction
{
public:
	RefinedAbstraction(AbstractionImp* imp);
	~RefinedAbstraction();
	void Operation();
protected:
private:
	AbstractionImp* _imp;
};
#endif // _ABSTRACTION_H
