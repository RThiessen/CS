//Ronald Thiessen
//CS 1361
//Lab 2
//This program outputs decimal digits using *'s
#include <iostream>
#include <string>

using namespace std;

const string ALL = "*****";
const string BOTH = "*   *";
const string LEFT = "*    ";
const string RIGHT = "    *"; 
const string MIDDLE = "  *  ";
const string SP = " ";
//SP = Space

int main()
{
	string msg;

	//idenifcation line
	cout << "Ronald Thiessen - CS1361 - Lab 2 " << endl << endl;
	
	//course number
	cout << "1361:" << endl << endl;

	//First Line
	msg = MIDDLE + SP + ALL + SP + ALL + SP + MIDDLE;
	cout << msg << endl;

	//Second Line
	msg = MIDDLE + SP + RIGHT + SP + LEFT + SP + MIDDLE;
	cout << msg << endl;

	//Third Line
	msg = MIDDLE + SP + ALL + SP + ALL + SP + MIDDLE;
	cout << msg << endl;

	//Fourth Line
	msg = MIDDLE + SP + RIGHT + SP + BOTH + SP + MIDDLE;
	cout << msg << endl;

	//Fifth Line
	msg = ALL + SP + ALL + SP + ALL + SP + ALL;
	cout << msg << endl;

	return 0;
}