/*
 * Foo.cpp
 *
 *  Created on: 03-Apr-2020
 *      Author: Soham
 */

//#include <iostream>
//#include "Foo.h"
//using namespace std;
//Foo::Foo(): m_num(1),n_num(2),a_num(3.14),b_num(2.77)
//{
//
//}
//void Foo::doX(){
//		cout<<"Foo2: Foo::doX() running"<<endl;
//		cout<< "\ti_a: " << m_num << "\n" << "\ti_b: " << n_num << "\n";
//		cout<< "\td_a: " << a_num << "\n" << "\td_b: " << b_num << "\n";
//	}

#include<iostream>
#include "Foo.h"
using namespace std;

Foo::Foo(): i(1),j(2),a(5.5),b(6.8)
{
//	cout << "I am a fancy constructor"<< endl;
	int a = doX(20, 23);
	printf("Constructor: %d \n", a);
}

Foo::~Foo()
{
	cout << "Here destructor got called";
}

int Foo::doX(int x, int y)
{
	return x+y;
}
