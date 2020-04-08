/*
 * Inheritance.cpp
 *
 *  Created on: 08-Apr-2020
 *      Author: Soham
 */


#include <iostream>
#include "Inheritance.h"
using namespace std;
	A::A(){
		cout<< "A()" <<endl;
	}

	void A::myMethod(){
		cout<< "A::myMethod()" <<endl;
	}

	B::B(){
		cout<< "B()" <<endl;
	}

	void B::myMethod(){
		cout<< "B::myMethod()" <<endl;

	}
