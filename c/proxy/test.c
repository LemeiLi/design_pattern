/*************************************************************************
	> File Name: test.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Wed 02 Oct 2019 04:03:16 PM CST
 ************************************************************************/

#include<stdio.h>
#include"subject.h"
#include"real_subject.h"
#include"proxy.h"

int main()
{
	struct subject* obja = (struct subject*)construct_real_subject();
	obja->request(obja);

	struct subject* objp = (struct subject*)construct_proxy((struct real_subject*)obja);
	objp->request(objp);

	return 0;
}
