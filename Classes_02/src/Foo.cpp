/*
 * Foo.cpp
 *
 *  Created on: 05-Apr-2020
 *      Author: Soham
 */

#include <iostream>
#include "Foo.h"
using namespace std;

Foo::Foo() : a(1), b(2), i(3.4), j(6.7)
{
	cout <<"Constructor invoked, values initialised using insitializer\n";
}

void Foo::myFunction()
{
	cout<<"Foo2: Foo::doX() running"<<endl;
	cout<< "\ta: " << a << "\n" << "\tb: " << b << "\n";
	cout<< "\ti: " << i << "\n" << "\tj: " << j << "\n";
}


