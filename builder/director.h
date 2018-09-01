/*************************************************************************
	> File Name: director.h
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 03 Aug 2018 07:55:51 PM CST
 ************************************************************************/

#ifndef _DIRECTOR_H
#define _DIRECTOR_H

class Builder;

class Director
{
public:
	Director(Builder* bld);
	~Director();
	void Construct();
protected:

private:
	Builder* _bld;
};

#endif // _DIRECTOR_H
