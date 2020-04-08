/*
 * Test.cpp
 *
 *  Created on: 08-Apr-2020
 *      Author: Soham
 */


#include <iostream>
#include "Inheritance.h"
using namespace std;

int main(){
	//Observe the printouts below.
	cout<<"A *a = new B(); // causes..."<<endl;
	A *a = new B();
	cout<<"a->myMethod() results in call to..."<<endl;
	a->myMethod();			//attempt polymorphic call
	cout<<"polymorphism IS working"<<endl;
}
