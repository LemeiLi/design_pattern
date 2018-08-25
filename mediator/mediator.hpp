/*************************************************************************
	> File Name: mediator.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 24 Aug 2018 07:52:05 PM CST
 ************************************************************************/

#ifndef _MEDIATOR_HPP
#define _MEDIATOR_HPP

class Colleage;

class Mediator
{
public:
	virtual ~Mediator();
	virtual void DoActionFromAtoB() = 0;
	virtual void DoActionFromBtoA() = 0;
protected:
	Mediator();
private:
};

class ConcreteMediator: public Mediator
{
public:
	ConcreteMediator();
	ConcreteMediator(Colleage* clgA, Colleage* clgB);
	~ConcreteMediator();
	void SetConcreteColleageA(Colleage* clg);
	void SetConcreteColleageB(Colleage* clg);
	Colleage* GetConcreteColleageA();
	Colleage* GetConcreteColleageB();
	void IntroColleage(Colleage* clgA, Colleage* clgB);
	void DoActionFromAtoB() override;
	void DoActionFromBtoA() override;
protected:
private:
	Colleage* _clgA;
	Colleage* _clgB;
};

#endif // _MEDIATOR_HPP
