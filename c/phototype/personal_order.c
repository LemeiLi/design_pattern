/*************************************************************************
	> File Name: personal_order.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 01 Oct 2019 03:56:25 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"order_api.h"
#include"personal_order.h"

static char* get_psname(const struct order_api* const pthis)
{
	struct personal_order* const pthis_ = (struct personal_order*)pthis;
	return pthis_->psname;	
}

static void set_psname(struct order_api* pthis, char* name)
{
	struct personal_order* pthis_ = (struct personal_order*)pthis;
	strncpy(pthis_->psname, name, 16);

	return ;
}

static int get_order_product_num_ps(const struct order_api* const pthis)
{
	return pthis->order_product_num;	
}

static void set_order_product_num_ps(struct order_api* pthis, int num)
{
	pthis->order_product_num = num;	
}

void personal_order_init(struct personal_order* pthis)
{
	static const struct order_vmt ps_vmt = {
		.get_order_product_num = &get_order_product_num_ps,
		.set_order_product_num = &set_order_product_num_ps,
	};
	order_api_static_ctor(&pthis->super, &ps_vmt);
	pthis->get_psname = &get_psname;
	pthis->set_psname = &set_psname;
}

struct personal_order* construct_personal_order(void)
{
	struct personal_order* pthis = malloc(sizeof(*pthis));
	personal_order_init(pthis);

	return pthis;
}

void destruct_personal_order(struct personal_order* pthis)
{
	free(pthis);
}



