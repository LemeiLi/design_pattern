/*************************************************************************
	> File Name: login_template.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 06 Oct 2019 01:15:46 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include"login_model.h"
#include"login_template.h"


static bool login(struct login_template* pthis, struct login_model* plm)
{
	struct login_model* dblm = pthis->find_login_user(pthis, plm->get_id(plm));
	
	if (dblm != NULL) {
		char* crypwd = pthis->encrypt_pwd(pthis, plm->get_pwd(plm));
		plm->set_pwd(plm, crypwd);

		return pthis->match(pthis, plm, dblm);
	}
}

static struct login_model* find_login_user(struct login_template* pthis, int id)
{
	pthis->vptr->find_login_user_vm(pthis, id); ///< must realized by derived class
}

static char* encrypt_pwd(struct login_template* pthis, char* pwd)
{
	if (pthis->vptr->encrypt_pwd_vm != NULL) {
		pthis->vptr->encrypt_pwd_vm(pthis, pwd);
	} else {
		printf("default plain text\n");
		return pwd; ///< default realization		
	}
}

static bool match(struct login_template* pthis, struct login_model* plm, struct login_model* pdb)
{
	if (plm->get_id(plm) == pdb->get_id(pdb) 
		&& !strcmp(plm->get_pwd(plm), pdb->get_pwd(pdb))) {
		printf("login successfully!\n");
		return true;	
	}
	return false;
}

void login_template_init(struct login_template* pthis)
{
	static const struct login_template_vmt vmt = {
		.find_login_user_vm = NULL,
		.encrypt_pwd_vm = NULL,
	};

	pthis->vptr = &vmt;
	pthis->login = login;
	pthis->find_login_user = find_login_user;
	pthis->encrypt_pwd = encrypt_pwd;
	pthis->match = match;
}

struct login_template* construct_login_template(void)
{
	struct login_template* pthis = malloc(sizeof(*pthis));
	memset(pthis, 0, sizeof(*pthis));

	login_template_init(pthis);

	return pthis;
}

void desturct_login_template(struct login_template* pthis)
{
	free(pthis);
}


