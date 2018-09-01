/*************************************************************************
	> File Name: main.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 31 Aug 2018 09:38:20 AM CST
 ************************************************************************/

#include<iostream>
#include"sigslot.h"
#include<unistd.h>
#include<stdio.h>

using namespace std;
using namespace sigslot;

class Csender
{
public:
	sigslot::signal2<std::string, int> m_pfnsigDanger;
	void Panic() {
		static int nVal = 0;
		char szVal[20] = {0};
		snprintf(szVal, 20, "help--%d", nVal);
		m_pfnsigDanger(szVal, nVal++);
	}
};

class Creceiver: public sigslot::has_slots<>
{
public:	
	void OnDanger(std::string strMsg, int nVal) {
		std::cout << strMsg.c_str() << "==> " << nVal << std::endl;
	}
};

int main()
{
	Csender sender;
	Creceiver recever;

	sender.m_pfnsigDanger.connect(&recever, &Creceiver::OnDanger);
	std::cout << "connect signal & slots together success." << std::endl;

	while (1) {
		std::cout << "in while..." << std::endl;
		sender.Panic();
		sleep(2);
	}

	return 0;
}

