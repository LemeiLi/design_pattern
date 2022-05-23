/*************************************************************************
	> File Name: command.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 28 Aug 2018 03:06:51 PM CST
 ************************************************************************/

#ifndef _COMMAND_HPP
#define _COMMAND_HPP


class Command
{
public:
	virtual ~Command();
	virtual void Excute() = 0;
protected:
	Command();
private:
};

template<typename T>
class SimpleCommand: public Command
{
public:
	//typedef void (T::* Action)(); ///< Action == member pointer function type: void Receiver::func();
	SimpleCommand(T* rcv, void (T::* act)());

	virtual void Excute() override;

	~SimpleCommand();
protected:
private:
	T* _rcv;
	void (T::* _act)();
};

#endif // _COMMAND_HPP
