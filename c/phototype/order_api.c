/*************************************************************************
	> File Name: order_api.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 01 Oct 2019 01:34:31 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>
#include"order_api.h"

///< abstract interface
static int get_order_product_num(const struct order_api* const pthis)
{
	return pthis->vptr->get_order_product_num(pthis);
}

static void set_order_product_num(struct order_api* pthis, int num)
{
	pthis->vptr->set_order_product_num(pthis, num);

	return;
}

void order_api_static_ctor(struct order_api* pthis, const struct order_vmt* vptr)
{
	pthis->vptr = vptr;
	pthis->get_order_product_num = get_order_product_num;	
	pthis->set_order_product_num = set_order_product_num;	
}





