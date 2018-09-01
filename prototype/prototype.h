/*************************************************************************
	> File Name: prototype.h
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Tue 07 Aug 2018 02:20:23 PM CST
 ************************************************************************/

#ifndef _PROTOTYPE_H
#define _PROTOTYPE_H

class Prototype
{
public:
	virtual ~Prototype();
	virtual Prototype* Clone() const = 0;
protected:
	Prototype();
private:

};

class ConcretePrototype: public Prototype
{
public:
	ConcretePrototype();
	ConcretePrototype(const ConcretePrototype& cp);
	~ConcretePrototype();
	Prototype* Clone() const;
protected:

private:

};

#endif // _PROTOTYPE_H
