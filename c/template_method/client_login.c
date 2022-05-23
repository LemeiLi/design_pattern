/*************************************************************************
	> File Name: client_login.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 06 Oct 2019 02:17:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"login_template.h"
#include"login_model.h"
#include"client_login.h"

static struct login_model* find_login_user_ov(struct login_template* pthis, int id)
{
	struct login_model* plm = construct_login_model();
	plm->set_id(plm, id);
	plm->set_pwd(plm, "xxdk");

	return plm;	
}

static void client_login_init(struct client_login* pthis) 
{
	static const struct login_template_vmt vmt = {
		.find_login_user_vm = find_login_user_ov,
	};

	login_template_init(&pthis->super);
	pthis->super.vptr = &vmt;
	pthis->login = pthis->super.login;
	pthis->match = pthis->super.match;
	pthis->encrypt_pwd = pthis->super.encrypt_pwd;
}

struct client_login* construct_client_login(void)
{
	struct client_login* pthis = malloc(sizeof(*pthis));
	memset(pthis, 0, sizeof(*pthis));

	client_login_init(pthis);

	return pthis;
}

void destruct_client_login(struct client_login* pthis)
{
	free(pthis);
}



