/*************************************************************************
	> File Name: test.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Thu 03 Oct 2019 05:55:09 PM CST
 ************************************************************************/

#include<stdio.h>
#include"subject.h"
#include"observer.h"
#include"media.h"
#include"reader.h"

int main()
{
	struct observer* po1 = (struct observer*)construct_reader("xxdk001");
	struct observer* po2 = (struct observer*)construct_reader("xxdk002");
	struct observer* po3 = (struct observer*)construct_reader("xxdk003");

	struct subject* ps = (struct subject*)construct_media();
	ps->attach_observer(ps, po1);
	ps->attach_observer(ps, po2);
	ps->attach_observer(ps, po3);
	
	struct media* pm = (struct media*)ps;
	pm->set_news(pm, "hello buaa!");

	ps->detach_observer(ps, po3);
	pm->set_news(pm, "stragetic focus!");

	destruct_reader((struct reader*)po1);
	destruct_reader((struct reader*)po2);
	destruct_reader((struct reader*)po3);
		
	destruct_media(pm);
}

