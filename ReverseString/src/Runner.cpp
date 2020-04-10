/*
 * Runner.cpp
 *
 *  Created on: 11-Apr-2020
 *      Author: Soham
 */


#include<iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
string reverseString(string str)
{
	reverse(str.begin(), str.end());
	cout << str << endl;
	return str;
}
int main()
{
	string s1 = "Hello";
	string s2 = "This is noice";
	reverseString(s1);
	reverseString(s2);
	return 0;

}

