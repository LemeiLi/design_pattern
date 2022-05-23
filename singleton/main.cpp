/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 03 Aug 2018 03:17:09 PM CST
 ************************************************************************/

#include<iostream>
#include"singleton.h"
using namespace std;

int main(int argc, char* argv[])
{
	Singleton* psobj = Singleton::Instance();	

	return 0;
}
	
