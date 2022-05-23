/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/phototype/personal_order.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 01 Oct 2019 04:02:45 PM CST
 ************************************************************************/

#ifndef _PERSONAL_ORDER_H
#define _PERSONAL_ORDER_H

///< realization of oder_api 
struct personal_order {
	struct order_api super;	
	char* (*get_psname)(const struct order_api* const pthis);
	void (*set_psname)(struct order_api* pthis, char* name);

	char psname[16];
};

extern void personal_order_init(struct personal_order* pthis);
extern struct personal_order* construct_personal_order(void);
extern void destruct_personal_order(struct personal_order* pthis);

#endif // _PERSONAL_ORDER_H
