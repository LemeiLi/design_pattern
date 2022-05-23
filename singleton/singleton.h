/*************************************************************************
	> File Name: singleton.h
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 03 Aug 2018 03:12:16 PM CST
 ************************************************************************/

#ifndef _SINGLETON_H
#define _SINGLETON_H

#include <iostream>

using namespace std;

class Singleton
{
public:
	static Singleton* Instance();
protected:
	Singleton();
private:
	static Singleton* _instance;
};

#endif // _SINGLETON_H
