/*
 * Test.cpp
 *
 *  Created on: 05-Apr-2020
 *      Author: Soham
 */


#include <iostream>
#include "Colour.h"
using namespace std;

int main()
{
	Colour *p = new Colour();
	p->setBlue(15);
	int a = p->getBlue();
	cout <<"Blue colour is a num: " <<  a << endl;
}

