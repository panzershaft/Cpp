/*
 * Foo.cpp
 *
 *  Created on: 05-Apr-2020
 *      Author: Soham
 */

#include<iostream>
#include"Foo.h"
using namespace std;

Foo::Foo()
{
	cout<< "Here calling the constructor" <<endl;
}

void Foo::myMethod()
{
	cout << "myMethod is running" << endl;
	new_func(1);
	new_func(5.5);
}

