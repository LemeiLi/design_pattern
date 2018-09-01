/*************************************************************************
	> File Name: product.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Fri 03 Aug 2018 04:03:14 PM CST
 ************************************************************************/

#include<iostream>
#include"product.h"

using namespace std;

Product::Product()
{
	ProducePart();
	std::cout << "return a product" << std::endl;
}

Product::~Product()
{
	;
}

void Product::ProducePart()
{
	std::cout << "build part of product..."	<< std::endl;
}

ProductPart::ProductPart()
{
	;	
}

ProductPart::~ProductPart()
{
	;	
}

ProductPart* ProductPart::BuildPart()
{
	return new ProductPart;
}
