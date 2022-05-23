/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/observer/media.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Thu 03 Oct 2019 05:46:05 PM CST
 ************************************************************************/

#ifndef _MEDIA_H
#define _MEDIA_H

#include"subject.h"

struct media {
	struct subject super;	
	char news[1024];

	void (*set_news)(struct media* pthis, char* news);
	char* (*get_news)(struct media* pthis);
};

extern struct media* construct_media(void);
extern void destruct_media(struct media* pthis);

#endif // _MEDIA_H
