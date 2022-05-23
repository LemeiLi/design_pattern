/*************************************************************************
	> File Name: test.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sat 05 Oct 2019 03:09:12 PM CST
 ************************************************************************/

#include<stdio.h>
#include"iterator.h"
#include"aggregate.h"
#include"array_iterator.h"
#include"array_aggregate.h"
#include"list_iterator.h"
#include"list_aggregate.h"
#include"list_object.h"
#include"ulist.h"

int main()
{
	char* array[] = {"xxdk001", "xxdk002", "xxdk003", "xxdk004", 0};
	struct array_aggregate* aagg = construct_array_aggregate(array, 4);

	struct iterator* itor = aagg->create_iterator((struct aggregate*)aagg);
	itor->first(itor);
	while (!itor->is_done(itor)) {
		printf("array item = %s\n", itor->current_item(itor));
		itor->next(itor);
	}

	struct list_head test_list;
	INIT_LIST_HEAD(&test_list);
	struct list_object lobj[] = {
		[0] = { .data = array[0], },
		[1] = { .data = array[1], },
		[2] = { .data = array[2], },
		[3] = { .data = array[3], },
	};


	for (int i = 0; i < sizeof(lobj)/sizeof(lobj[0]); i++) {
		list_add(&lobj[i].node, &test_list);
	}

	struct list_aggregate* lagg = construct_list_aggregate(&test_list);
	itor = lagg->create_iterator((struct aggregate*)lagg);
	itor->first(itor);
	while (!itor->is_done(itor)) {
		printf("list item = %s\n", itor->current_item(itor));
		itor->next(itor);
	}

	return 0;
}
