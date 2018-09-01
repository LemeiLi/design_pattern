/*************************************************************************
	> File Name: invoker.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Mon 27 Aug 2018 07:43:10 PM CST
 ************************************************************************/

#ifndef _INVOKER_HPP
#define _INVOKER_HPP

class Command;

class Invoker
{
public:
	Invoker(Command* cmd);
	~Invoker();
	void Invoke();
protected:
private:
	Command* _cmd;
};
#endif // _INVOKER_HPP
