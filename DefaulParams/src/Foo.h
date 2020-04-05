/*
 * Foo.h
 *
 *  Created on: 06-Apr-2020
 *      Author: Soham
 */

#ifndef FOO_H_
#define FOO_H_

class Foo
{
public:
	int a, b;
	Foo();
	void myMethod(int x, int y=5); //here value of y will always be 5 if no value passed to it
};




#endif /* FOO_H_ */
