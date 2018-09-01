/*************************************************************************
	> File Name: facade.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 15 Aug 2018 04:57:54 PM CST
 ************************************************************************/

#ifndef _FACADE_HPP
#define _FACADE_HPP

class Subsystem1
{
public:
	Subsystem1();
	~Subsystem1();
	void Operation();
protected:
private:
};

class Subsystem2
{
public:
	Subsystem2();
	~Subsystem2();
	void Operation();
protected:
private:
};

class Facade
{
public:
	Facade();
	~Facade();
	void OperationWrapper();
protected:
private:
	Subsystem1* _subs1;
	Subsystem2* _subs2;
};
#endif // _FACADE_HPP
