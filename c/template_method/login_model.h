/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/template_method/login_model.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 06 Oct 2019 01:13:09 PM CST
 ************************************************************************/

#ifndef _LOGIN_MODEL_H
#define _LOGIN_MODEL_H

struct login_model {
	int id;
	char pwd[16];
	
	int (*get_id)(struct login_model* pthis);
	void (*set_id)(struct login_model* pthis, int id);
	char* (*get_pwd)(struct login_model* pthis);
	void (*set_pwd)(struct login_model* pthis, char* pwd);
};

extern void destruct_login_model(struct login_model* pthis);
extern struct login_model* construct_login_model(void);

#endif // _LOGIN_MODEL_H
