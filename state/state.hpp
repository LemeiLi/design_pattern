/*************************************************************************
	> File Name: state.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 21 Aug 2018 04:39:40 PM CST
 ************************************************************************/

#ifndef _STATE_HPP
#define _STATE_HPP

class Context;

class State
{
public:
	State();
	virtual ~State();
	virtual void OperationInterface(Context*) = 0;
	virtual void OperationChangeState(Context* ) = 0;
	virtual void CurrentState() = 0;
protected:
	bool ChangeState(Context* con, State* st);
private:
	//bool ChangeState(Context* con, State* st);
};

class ConcreteStateA: public State
{
public:
	ConcreteStateA();
	virtual ~ConcreteStateA();
	virtual void OperationInterface(Context*) override;
	virtual void OperationChangeState(Context*) override;
	virtual void CurrentState() override;
protected:
private:
};

class ConcreteStateB: public State
{
public:
	ConcreteStateB();
	virtual ~ConcreteStateB();
	virtual void OperationInterface(Context*) override;
	virtual void OperationChangeState(Context*) override;
	virtual void CurrentState() override;
protected:
private:
};

class ConcreteStateC: public State
{
public:
	ConcreteStateC();
	virtual ~ConcreteStateC();
	virtual void OperationInterface(Context*) override;
	virtual void OperationChangeState(Context*) override;
	virtual void CurrentState() override;
protected:
private:
};

#endif // _STATE_HPP
