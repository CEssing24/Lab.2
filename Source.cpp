/*
Carter Essing
C++ fall 2022
Due: September 14, 2022
Lab 2: Making Course Schedule
This lab is showing us how to code are course schedule
*/

#include <iostream>
#include <string>

using namespace std;

//Function prototype
void TestFunction();

const string MWF = "\tMonday, Wednesday, and Friday Macro Economics, C++, PE/Studyhall, Algebra 2, Chemistry, American Lit";

int main()
{
	const string TT = "\t Tuesday and Thursday Enginering Problems, C++, PE/Studyhall, Algebra 2, Chemistry, American Lit";

	//Function call
	TestFunction();
	cout << "test";
	//Function call
	TestFunction();

	cout << endl << MWF << endl << TT;

	return 0;
}

//Function definition
void TestFunction()
{
	cout << "In function";
	cout << MWF;
	//std::cout << TT; Not valid
}