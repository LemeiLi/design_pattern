/*************************************************************************
	> File Name: colleage.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 24 Aug 2018 07:33:52 PM CST
 ************************************************************************/

#ifndef _COLLEAGE_HPP
#define _COLLEAGE_HPP

#include <string>

class Mediator;

class Colleage
{
public:
	virtual ~Colleage();
	virtual void Action() = 0;
	virtual void SetState(const std::string& st) = 0;
	virtual std::string GetState() = 0;
protected:
	Colleage();
	Colleage(Mediator* mdt);
	Mediator* _mdt;
private:
};

class ConcreteColleageA: public Colleage
{
public:
	ConcreteColleageA();
	ConcreteColleageA(Mediator* mdt);
	~ConcreteColleageA();
	void Action() override;
	void SetState(const std::string& st) override;
	std::string GetState(); 
protected:
	std::string _st;
};

class ConcreteColleageB: public Colleage
{
public:
	ConcreteColleageB();
	ConcreteColleageB(Mediator* mdt);
	~ConcreteColleageB();
	void Action() override;
	void SetState(const std::string& st) override;
	std::string GetState(); 
protected:
	std::string _st;
};




#endif // _COLLEAGE_HPP
