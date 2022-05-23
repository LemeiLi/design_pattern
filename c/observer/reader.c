/*************************************************************************
	> File Name: reader.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Thu 03 Oct 2019 04:33:42 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"ulist.h"
#include"subject.h"
#include"observer.h"
#include"media.h"
#include"reader.h"


static void reader_update_virtual(struct observer* pthis, struct subject* psub)
{ 
	struct media* pm = (struct media*)psub;
	printf("reader[%s] get news from media: %s\n", ((struct reader*)pthis)->name, pm->get_news(pm));
}

void reader_init(struct reader* pthis, char* pname)
{
	static struct observer_vmt rvmt = {
		.update_virtual = reader_update_virtual,
	};
	observer_init(&pthis->super);
	pthis->super.vptr = &rvmt;

	pthis->update = reader_update_virtual;	
	strncpy(pthis->name, pname, 10);
}

struct reader* construct_reader(char* name)
{
	struct reader* pthis = malloc(sizeof(*pthis));
	reader_init(pthis, name);

	return pthis;
}

void destruct_reader(struct reader* pthis)
{
	free(pthis);
}

