/*************************************************************************
	> File Name: memento.hpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Thu 23 Aug 2018 04:10:58 PM CST
 ************************************************************************/

#ifndef _MEMENTO_HPP
#define _MEMENTO_HPP

class Memento;

class Originator
{
public:
	typedef std::string State;
	Originator();
	Originator(const State& st);
	~Originator();
	Memento* CreateMemento();
	void SetMemento(Memento* mt);
	void RestoreToMemento(Memento* mt);
	State GetState();
	void SetState(const State& st);
	void PrintState();
protected:
private:
	State _st;
	Memento* _mt;
};

class Memento
{
public:
protected:
private:
	friend class Originator; ///< Originator as friend class. 
	typedef std::string State;
	Memento();
	Memento(const State& st);
	~Memento();
	void SetState(const State& st);
	State GetState();
private:
	State _st;
};


#endif // _MEMENTO_HPP
