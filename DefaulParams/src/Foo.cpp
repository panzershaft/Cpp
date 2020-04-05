/*
 * Foo.cpp
 *
 *  Created on: 06-Apr-2020
 *      Author: Soham
 */


#include<iostream>
#include "Foo.h"
using namespace std;

Foo::Foo(){
	cout <<"Here ate the constructor"<< endl;
	a = 0;
	b = 0;
}

	// HERE: See the header-file declaration for myMethod().
	// The myMethod() function can be called with just one arg.
	// If no value for 'b' is supplied the default value of 5 is used
	void Foo::myMethod(int aVal, int bVal){
		cout<<"doX(:int, :int) running"<<endl;
		a = aVal;
		b = bVal;						//bVal defaults to 5
	}
