/*************************************************************************
	> File Name: proxy.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 15 Aug 2018 05:41:51 PM CST
 ************************************************************************/

#ifndef _PROXY_HPP
#define _PROXY_HPP

class Subject
{
public:
	virtual ~Subject();
	virtual void Request() = 0;
protected:
	Subject();
private:
};

class ConcreteSubject: public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject();
	void Request();
protected:
private:
};

class Proxy
{
public:
	Proxy();
	Proxy(Subject* sub);
	~Proxy();
	void Request();
protected:
private:
	Subject* _sub;
};

#endif // _PROXY_HPP
