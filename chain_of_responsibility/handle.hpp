/*************************************************************************
	> File Name: handle.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Wed 29 Aug 2018 04:33:24 PM CST
 ************************************************************************/

#ifndef _HANDLE_HPP
#define _HANDLE_HPP

class Handle
{
public:
	virtual ~Handle();
	virtual void HandleRequest() = 0;
	void SetHandler(Handle* succ);
	Handle* GetHandler();
protected:
	Handle();
	Handle(Handle* handler);
private:
	Handle* _handler;
};

class ConcreteHandleA: public Handle
{
public:
	ConcreteHandleA();
	~ConcreteHandleA();
	ConcreteHandleA(Handle* handler);
	void HandleRequest()  override;
protected:
private:
};

class ConcreteHandleB: public Handle
{
public:
	ConcreteHandleB();
	~ConcreteHandleB();
	ConcreteHandleB(Handle* handler);
	void HandleRequest() override;
protected:
private:
};

#endif // _HANDLE_HPP
