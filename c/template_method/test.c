/*************************************************************************
	> File Name: test.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 06 Oct 2019 02:57:15 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include"login_template.h"
#include"login_model.h"
#include"client_login.h"
#include"master_login.h"

int main()
{
	struct login_model* usr;
	struct login_template* plt;

	usr = construct_login_model();
	usr->set_id(usr, 1);
	usr->set_pwd(usr, "xxdk");

	printf("client user login: \n");
	plt = (struct login_template*)construct_client_login();
	plt->login(plt, usr);
	destruct_client_login((struct client_login*)plt);

	printf("master user login: \n");
	plt = (struct login_template*)construct_master_login();
	plt->login(plt, usr);
	destruct_master_login((struct master_login*)plt);

	destruct_login_model(usr);

	return 0;
}
