/*
 * Test.cpp
 *
 *  Created on: 05-Apr-2020
 *      Author: Soham
 *      Here we will create a basic header file, along with a class file to showcase
 *      its use.
 *      Advantages of using header files?
 *      1. Helps abstracting the method defination so that only
 *      interface can be seen,
 *      2. Makes compilation fast if any changes in the class file
 */


#include <iostream>
#include "Foo.h"
using namespace std;

int main()
{
	Foo *f = new Foo();
	f->myFunction();
	cout << "\nnum: " << f->num;
}
