/*************************************************************************
	> File Name: order_business.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Tue 01 Oct 2019 04:00:53 PM CST
 ************************************************************************/

#ifndef _ORDER_BUSINESS_H
#define _ORDER_BUSINESS_H

#include "order_api.h"

struct order_business {
	void (*save_order)(struct order_business* pthis, struct order_api* order);
};

extern struct order_business* order_business_ctor(void);

#endif // _ORDER_BUSINESS_H
