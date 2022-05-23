/*************************************************************************
	> File Name: order_api.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 01 Oct 2019 03:57:23 PM CST
 ************************************************************************/

#ifndef _ORDER_API_H
#define _ORDER_API_H

struct order_vmt;
struct order_api {
	const struct order_vmt* vptr; 
	int (*get_order_product_num)(const struct order_api* const pthis);
	void (*set_order_product_num)(struct order_api* pthis, int num);

	int order_product_num;
};

///< virtual method table
struct order_vmt {
	int (*get_order_product_num)(const struct order_api* const pthis);
	void (*set_order_product_num)(struct order_api* pthis, int num);
};

extern void order_api_static_ctor(struct order_api* pthis, const struct order_vmt* vptr);



#endif // _ORDER_API_H
