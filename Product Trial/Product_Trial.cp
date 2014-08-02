/*
 *  Product_Trial.cp
 *  Product Trial
 *
 *  Created by Spoo :)) on 8/2/14.
 *  Copyright (c) 2014 SelinaThathapudi. All rights reserved.
 *
 */

#include <iostream>
#include "Product_Trial.h"
#include "Product_TrialPriv.h"

void Product_Trial::HelloWorld(const char * s)
{
	 Product_TrialPriv *theObj = new Product_TrialPriv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void Product_TrialPriv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

