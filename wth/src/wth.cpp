//============================================================================
// Name        : wth.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Foo.h"
#include "Colour.h"
using namespace std;
struct Sample
{
	int i;
	int j;
};
int main() {

	Foo *p = new Foo();
	Colour *c = new Colour();
	c->setRed(99);
	int red = c->getRed();
	cout << "c->getRed() returns:"<< red;
	printf("%d \n",p->doX(10, 10));
	delete p;
	return 0;
}
