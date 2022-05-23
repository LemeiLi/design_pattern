/*************************************************************************
	> File Name: media.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Thu 03 Oct 2019 05:25:03 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"observer.h"
#include"subject.h"
#include"media.h"

static void set_news(struct media* pthis, char* news)
{
	strncpy(pthis->news, news, 1023);
	struct subject* ps = (struct subject*)pthis;
	ps->notify_observers(ps);
}

static char* get_news(struct media* pthis)
{
	return pthis->news;	
}

void media_init(struct media* pthis)
{
	subject_init(&pthis->super);
	pthis->set_news = set_news;	
	pthis->get_news = get_news;	
}

struct media* construct_media(void)
{
	struct media* pthis = malloc(sizeof(*pthis));
	
	memset(pthis, 0, sizeof(*pthis));
	media_init(pthis);

	return pthis;
}

void destruct_media(struct media* pthis)
{
	free(pthis);
}


