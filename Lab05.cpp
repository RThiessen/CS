//Ronald Thiessen
//CS 1361
//Lab 5

//This program outputs my name in "last name, first name middle name" format and outputs my age.

#include <iostream>
#include <string>
using namespace std;

const string IDLINE = "Ronald Thiessen - CS 1361 - Lab 5\n\n"; //Name and class
const string MYNAME = "My name is ";
const string COMMA = ",";
const string SP = " ";
const string IAM = "I am ";
const string YO = " years old.";
//YO = Years old
//SP = Space

//My name
const string FIRSTNAME = "Ronald";
const string MIDDLENAME = "Martens";
const string LASTNAME = "Thiessen";

//will be used to determine age
const int CURRENTYEAR = 2015; 
const int BIRTHYEAR = 1996;


int main()
{
	int age; //defines variable age
	age = CURRENTYEAR - BIRTHYEAR; //calculates age

	cout << IDLINE; //outputs name and class and lab number
	cout << MYNAME << LASTNAME << COMMA << SP << FIRSTNAME << SP << MIDDLENAME << endl << endl;
	cout << IAM << age << YO << endl << endl; //outputs my age

return 0;
}