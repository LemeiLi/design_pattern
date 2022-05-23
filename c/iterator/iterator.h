/*************************************************************************
	> File Name: /home/caesar/xxdk/design_pattern/c/iterator/iterator.h
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 01:55:01 PM CST
 ************************************************************************/

#ifndef _ITERATOR_H
#define _ITERATOR_H

#include<stdbool.h>

///< interface class
struct iterator_vmt;
struct iterator {
	const struct iterator_vmt* vptr;
	void (*first)(struct iterator* pthis);
	void (*next)(struct iterator* pthis);
	bool (*is_done)(struct iterator* pthis);
	char* (*current_item)(struct iterator* pthis);
};

struct iterator_vmt {
	void (*first_vm)(struct iterator* pthis);
	void (*next_vm)(struct iterator* pthis);
	bool (*is_done_vm)(struct iterator* pthis);
	char* (*current_item_vm)(struct iterator* pthis);
};

extern void iterator_init(struct iterator* pthis);

#endif // _ITERATOR_H
