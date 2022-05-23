/*************************************************************************
	> File Name: list_object.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 04:42:26 PM CST
 ************************************************************************/

#include"ulist.h"

struct list_object {
	struct list_head node;
	char* data;
};
