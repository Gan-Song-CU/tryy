#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void main()
{
	ifstream input("a.txt");
	string T;
	bool a;

	getline(input, T);
	a = input.eof();
	getline(input, T);
	a = input.eof();
	getline(input, T);
	a = input.eof();
	getline(input, T);
	a = input.eof();



}