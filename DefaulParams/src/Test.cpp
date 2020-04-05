/*
 * Test.cpp
 *
 *  Created on: 06-Apr-2020
 *      Author: Soham
 */

#include <iostream>
#include "Foo.h"

using namespace std;

int main()
{
	Foo *p = new Foo();
	p->myMethod(10);
	cout<< "a = "<< p->a <<", b = " << p->b <<endl;
}
