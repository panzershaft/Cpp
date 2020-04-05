/*
 * Runner.cpp
 *
 *  Created on: 05-Apr-2020
 *      Author: Soham
 */


#include <iostream>
using namespace std;

void pointer_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap_useless(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int i = 5;
	int j = 6;
	cout << "Before useless swap:" << endl;
	cout<< "i: " << i << "\tj: "<< j << endl;
	swap_useless(i, j);
	cout << "After useless swap:" << endl;
	cout<< "i: " << i << "\tj: "<< j << endl;
	pointer_swap(&i, &j);
	cout << "After pointer swap:" << endl;
	cout<< "i: " << i << "\tj: "<< j << endl;
}

