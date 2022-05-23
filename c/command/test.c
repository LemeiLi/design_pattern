/*************************************************************************
	> File Name: test.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 04 Oct 2019 04:48:00 PM CST
 ************************************************************************/

#include<stdio.h>
#include"calculator.h"
#include"operation.h"
#include"algo_operation.h"
#include"command.h"
#include"add_command.h"
#include"sub_command.h"

int main()
{
	struct operation* ops = (struct operation*)construct_algo_operation();

	struct command* add = (struct command*)construct_add_commmad(ops, 10);
	struct command* sub = (struct command*)construct_sub_commmad(ops, 5);

	struct calculator* calc = construct_calculator();
	calc->set_add_cmd(calc, add);
	calc->set_sub_cmd(calc, sub);

	calc->add_pressed(calc);
	printf("add -> get result: %d\n", ops->get_result(ops));

	calc->sub_pressed(calc);
	printf("sub -> get result: %d\n", ops->get_result(ops));

	
	destruct_algo_operation((struct algo_operation*)ops);
	destruct_add_command((struct add_command*)add);
	destruct_sub_command((struct sub_command*)sub);
	destruct_calculator(calc);

	return 0;
}




