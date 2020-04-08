/*
 * Inheritance.h
 *
 *  Created on: 08-Apr-2020
 *      Author: Soham
 */

#ifndef INHERITANCE_H_
#define INHERITANCE_H_

class A
{
public:
	A();
	virtual void myMethod();
};

class B: public A
{
public:
	B();
	void myMethod();
};


#endif /* INHERITANCE_H_ */
