/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/template_method/login_template.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 06 Oct 2019 02:11:22 PM CST
 ************************************************************************/

#ifndef _LOGIN_TEMPLATE_H
#define _LOGIN_TEMPLATE_H

#include<stdbool.h>
#include"login_model.h"

struct login_template_vmt;
struct login_template {
	const struct login_template_vmt* vptr;			
			
	bool (*login)(struct login_template* pthis, struct login_model* plm);
	struct login_model* (*find_login_user)(struct login_template* pthis, int id);
	char* (*encrypt_pwd)(struct login_template* pthis, char* pwd);
	bool (*match)(struct login_template* pthis, struct login_model* plm, struct login_model* pdb);
}; 

struct login_template_vmt {
	struct login_model* (*find_login_user_vm)(struct login_template* pthis, int id);
	char* (*encrypt_pwd_vm)(struct login_template* pthis, char* pwd);
};

extern struct login_template* construct_login_template(void);
extern void login_template_init(struct login_template* pthis);
extern void desturct_login_template(struct login_template* pthis);

#endif // _LOGIN_TEMPLATE_H
