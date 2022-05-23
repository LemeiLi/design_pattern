/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/phototype/enterprise_order.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 01 Oct 2019 04:02:45 PM CST
 ************************************************************************/

#ifndef _ENTERPRISE_ORDER_H
#define _ENTERPRISE_ORDER_H

///< realization of oder_api 
struct enterprise_order {
	struct order_api super;	
	char* (*get_epname)(const struct order_api* const pthis);
	void (*set_epname)(struct order_api* pthis, char* name);

	char epname[16];
};

extern void enterprise_order_init(struct enterprise_order* pthis);
extern struct enterprise_order* construct_enterprise_order(void);
extern void destruct_enterprise_order(struct enterprise_order* pthis);

#endif //  _ENTERPRISE_ORDER_H
