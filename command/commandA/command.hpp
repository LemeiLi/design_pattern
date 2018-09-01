/*************************************************************************
	> File Name: command.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Mon 27 Aug 2018 07:32:31 PM CST
 ************************************************************************/

#ifndef _COMMAND_HPP
#define _COMMAND_HPP

class Receiver;

class Command
{
public:
	virtual ~Command();
	virtual void Excute() = 0;
protected:
	Command();
private:
};

class ConcreteCommand : public Command
{
public:
	ConcreteCommand(Receiver* rcv);
	~ConcreteCommand();
	void Excute() override;
protected:
private:
	Receiver * _rcv;
};
#endif // _COMMAND_HPP
