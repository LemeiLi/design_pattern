/*************************************************************************
	> File Name: test.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 01 Oct 2019 04:01:57 PM CST
 ************************************************************************/

#include<stdio.h>
#include"order_api.h"
#include"personal_order.h"
#include"enterprise_order.h"
#include "order_business.h"

int main()
{
	struct order_api* sp;
	struct order_business* obobj = order_business_ctor();

	struct personal_order po;
	personal_order_init(&po);
	sp = (struct order_api*)&po;
	po.set_psname(sp, "xxdk");
	printf("name = %s\n", po.get_psname(sp));
	sp->set_order_product_num(sp, 11);
	obobj->save_order(obobj, sp);

	struct enterprise_order* peo = construct_enterprise_order();
	sp = (struct order_api*)peo;
	peo->set_epname(sp, "oopc");
	printf("name = %s\n", peo->get_epname(sp));
	sp->set_order_product_num(sp, 9);
	obobj->save_order(obobj, sp);

	return 0;
}
