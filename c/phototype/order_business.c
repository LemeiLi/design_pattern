/*************************************************************************
	> File Name: order_business.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 01 Oct 2019 04:00:29 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"order_api.h"
#include"order_business.h"

static void save_order(struct order_business* pthis, struct order_api* order)
{
	if(order->get_order_product_num(order) > 10)	
		printf("xxxxxxxxxxxxxxxxxxxx > 10\n");
	else
		printf("xxxxxxxxxxxxxxxxxxxx <= 10\n");
}

struct order_business* order_business_ctor(void)
{
	struct order_business* pthis_ = malloc(sizeof(*pthis_));

	pthis_->save_order = &save_order;

	return pthis_;
}
