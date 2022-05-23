/*************************************************************************
	> File Name: login_model.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 06 Oct 2019 01:04:59 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"login_model.h"


static int get_id(struct login_model* pthis)
{
	return pthis->id;	
}
static void set_id(struct login_model* pthis, int id)
{
	pthis->id = id;	
}
static char* get_pwd(struct login_model* pthis)
{
	return pthis->pwd;	
}
static void set_pwd(struct login_model* pthis, char* pwd)
{
	strncpy(pthis->pwd, pwd, 16);
}


static void login_model_init(struct login_model* pthis)
{
	pthis->get_id = get_id;
	pthis->set_id = set_id;
	pthis->get_pwd = get_pwd;
	pthis->set_pwd = set_pwd;
}


struct login_model* construct_login_model(void)
{
	struct login_model* pthis = malloc(sizeof(*pthis));

	login_model_init(pthis);

	return pthis;
}

void destruct_login_model(struct login_model* pthis)
{
	free(pthis);
}


