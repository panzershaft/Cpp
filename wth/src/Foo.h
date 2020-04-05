/*
 * Foo.h
 *
 *  Created on: 03-Apr-2020
 *      Author: Soham
 */

#ifndef FOO_H_
#define FOO_H_


//class Foo
//{
//public:
//	Foo();
//	void doX();
//protected:
//	int m_num, n_num;
//private:
//	double a_num, b_num;
//};

class Foo
{
public:
	Foo();
	~Foo();
	int doX(int a, int b);
protected:
	int i,j;
private:
	double a,b;

};


#endif /* FOO_H_ */
