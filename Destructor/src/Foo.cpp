/*
 * Foo.cpp
 *
 *  Created on: 05-Apr-2020
 *      Author: Soham
 */

#include <iostream>
#include "Foo.h"

using namespace std;

Foo::Foo() : a(1), b(2), i(1.1), j(2.2)
{
	cout << "In the constructor \n";
}

Foo::~Foo(){											// "Destructor"
		cout<< "Foo() destructor" << endl;
		cout<< "\trunning after delete called" << endl;
		cout<< "\t(Typically clean-up code)" << endl;
	}

	void Foo::myMethod(){
		cout<<"myMethod() running"<<endl;
		cout<< "\ta: " << a << "\n" << "\tb: " << b << "\n";
		cout<< "\ti: " << i << "\n" << "\tj: " << j << "\n";
	}


