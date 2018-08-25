/*************************************************************************
	> File Name: adapter.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 08 Aug 2018 03:38:54 PM CST
 ************************************************************************/

#ifndef _ADAPTER_HPP
#define _ADAPTER_HPP

class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request();
protected:
private:

};

class Adaptee
{
public:
	Adaptee();
	~Adaptee();
	void SpecificRequest();
protected:
private:
};

class Adapter: public Target
{
public:
	Adapter(Adaptee* ade);
	~Adapter();
	void Request() override;
protected:
private:
	Adaptee* _ade;
};
#endif // _ADAPTER_HPP
