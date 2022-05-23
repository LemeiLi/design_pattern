/*************************************************************************
	> File Name: context.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 16 Aug 2018 05:11:05 PM CST
 ************************************************************************/

#ifndef _CONTEXT_HPP
#define _CONTEXT_HPP

class Strategy;

class Context
{
public:
	Context(Strategy* stg);
	~Context();
	void DoActaion();
protected:
private:
	Strategy* _stg;
};


#endif // _CONTEXT_HPP
