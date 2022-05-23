/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/template_method/client_login.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 06 Oct 2019 02:44:21 PM CST
 ************************************************************************/

#ifndef _CLIENT_LOGIN_H
#define _CLIENT_LOGIN_H

#include<stdbool.h>
#include"login_model.h"
#include"login_template.h"

struct client_login {
	struct login_template super;	

	bool (*login)(struct login_template* pthis, struct login_model* plm);
	struct login_model* (*find_login_user)(struct login_template* pthis, int id);
	char* (*encrypt_pwd)(struct login_template* pthis, char* pwd);
	bool (*match)(struct login_template* pthis, struct login_model* plm, struct login_model* pdb);
}; 

extern struct client_login* construct_client_login(void);
extern void destruct_client_login(struct client_login* pthis);

#endif // _CLIENT_LOGIN_H
