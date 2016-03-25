//Ronald Thiessen
//CS 1361
//Lab 6

//This program outputs the users first name, middle name, last name, and age based on what they input.

#include <iostream>
#include <string>
using namespace std;

const string IDLINE = "Ronald Thiessen - CS 1361 - Lab 6\n\n"; //Name and class
const string MYNAME = "My name is ";
const string COMMA = ",";
const string SP = " ";
const string IAM = "I am ";
const string YO = " years old.";
//YO is years old
//SP is space

//string literals outputed for user instruction
const string FIRSTNAME = "Enter your first name <then press ENTER>: ";
const string MIDDLENAME = "Enter your middle name <then press ENTER>: ";
const string LASTNAME = "Enter your last name <then press ENTER>: ";
const string BY = "Enter your birth year as a four digit number <then press ENTER>: ";
//BY is birth year

//will be used to determine age
const int CURRENTYEAR = 2015;


int main()
{
	string first; //variable for first name
	string last; //variable for last name
	string middle; //variable for middle name
	int birthYear; //variable for birth year

	cout << IDLINE;
	cout << FIRSTNAME;
	cin >> first; //lets user input their first name

	cout << MIDDLENAME;
	cin >> middle; //lets user input their first name

	cout << LASTNAME;
	cin >> last; //lets user input their first name

	cout << BY;
	cin >> birthYear; //lets user input their birth year

	cout << endl;
	cout << MYNAME << last << COMMA << SP << first << SP << middle << endl << endl;
	cout << IAM << CURRENTYEAR - birthYear << YO << endl << endl;



	return 0;
}