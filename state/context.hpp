/*************************************************************************
	> File Name: context.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 21 Aug 2018 04:54:24 PM CST
 ************************************************************************/

#ifndef _CONTEXT_HPP
#define _CONTEXT_HPP

class State;

class Context
{
public:
	Context();
	Context(State* state);
	~Context();
	void OperationInterface();
	void OperationChangeState();
protected:
private:
	friend class State; ///< State class can access Context class;
	bool ChangeState(State* state);
	State* _state;
};

#endif // _CONTEXT_HPP
