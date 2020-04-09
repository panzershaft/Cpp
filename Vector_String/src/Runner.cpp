/*
 * Runner.cpp
 *
 *  Created on: 09-Apr-2020
 *      Author: Soham
 */


#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	vector<string> v;
	v.push_back("Watch");
	v.push_back(" a");
	v.push_back(" documentary");

	for(string s: v){
		cout<< s;
	}
}

