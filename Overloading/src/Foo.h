/*
 * Foo.h
 *
 *  Created on: 05-Apr-2020
 *      Author: Soham
 */

#ifndef FOO_H_
#define FOO_H_
#include<stdio.h>
class Foo
{
public:
	Foo();
	void myMethod();
	void new_func(int i) { printf("print(int):\t i = %d\n",i);}
	void new_func(double i) {printf("print(double):\t i = %f\n",i);}
};


#endif /* FOO_H_ */
