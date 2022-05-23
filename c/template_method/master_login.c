/*************************************************************************
	> File Name: master_login.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 06 Oct 2019 02:17:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"login_template.h"
#include"login_model.h"
#include"master_login.h"

static struct login_model* find_login_user_ov(struct login_template* pthis, int id)
{
	struct login_model* plm = construct_login_model();
	plm->set_id(plm, id);
	plm->set_pwd(plm, "xxdk");

	return plm;	
}

static char* encrypt_pwd_ov(struct login_template* pthis, char* pwd)
{
	printf("master encrypt pwd\n");
	return pwd;
}

static void master_login_init(struct master_login* pthis) 
{
	static const struct login_template_vmt vmt = {
		.find_login_user_vm = find_login_user_ov, ///< method override 
		.encrypt_pwd_vm = encrypt_pwd_ov,         ///< method override
	};

	login_template_init(&pthis->super);
	pthis->super.vptr = &vmt;
	pthis->login = pthis->super.login; ///< use base class method
	pthis->match = pthis->super.match; ///< use base class method
}

struct master_login* construct_master_login(void)
{
	struct master_login* pthis = malloc(sizeof(*pthis));
	memset(pthis, 0, sizeof(*pthis));

	master_login_init(pthis);

	return pthis;
}

void destruct_master_login(struct master_login* pthis)
{
	free(pthis);
}



