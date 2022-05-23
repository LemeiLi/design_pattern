/*************************************************************************
	> File Name: enterprise_order.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 01 Oct 2019 03:56:25 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"order_api.h"
#include"enterprise_order.h"

static char* get_epname(const struct order_api* const pthis)
{
	struct enterprise_order* const pthis_ = (struct enterprise_order*)pthis;
	return pthis_->epname;	
}

static void set_epname(struct order_api* pthis, char* name)
{
	struct enterprise_order* pthis_ = (struct enterprise_order*)pthis;
	strncpy(pthis_->epname, name, 16);

	return ;
}

static int get_order_product_num_ep(const struct order_api* const pthis)
{
	return pthis->order_product_num;	
}

static void set_order_product_num_ep(struct order_api* pthis, int num)
{
	pthis->order_product_num = num;	
}

void enterprise_order_init(struct enterprise_order* pthis)
{
	static const struct order_vmt ps_vmt = {
		.get_order_product_num = &get_order_product_num_ep,
		.set_order_product_num = &set_order_product_num_ep,
	};
	order_api_static_ctor(&pthis->super, &ps_vmt);
	pthis->get_epname = &get_epname;
	pthis->set_epname = &set_epname;
}

struct enterprise_order* construct_enterprise_order(void)
{
	struct enterprise_order* pthis = malloc(sizeof(*pthis));
	enterprise_order_init(pthis);

	return pthis;
}

void destruct_enterprise_order(struct enterprise_order* pthis)
{
	free(pthis);
}




