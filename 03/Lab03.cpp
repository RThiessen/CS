//Ronald Thiessen
//CS1361
//Lab 3
//This program outputs lines to your screeen based on arithmetic operations. Floating point divison, integer division, and modulo.
#include <iostream>
#include <string>

using namespace std;

const int   INT_SEVEN = 7;
const int   INT_MINUS_SEVEN = -7;
const int   INT_FOUR = 4;
const int   INT_MINUS_FOUR = -4;
const float FLT_SEVEN = 7.0;
const float FLT_FOUR = 4.0;
//used spaces to line up integers

const string USINGFLOAT = " using float point division equals "; //prints "using float point division equals" when string is used
const string USINGINTEGER = " using integer division equals "; //prints "using integer division equals" when string is used
const string DIVISIONSIGN = " / "; //prints a division sign when string is used
const string MODULO = " modulo ";//prints "modulo" when string is used
const string EQUALS = " equals "; //prints "equals" when string is used
const string IDLINE = "Ronald Thiessen - CS 1361 - Lab 3\n\n"; //Name and class

int main()
{

	int resultInt;
	float resultFlt;

	//ID Line
	cout << IDLINE;

	//first line
	resultFlt = FLT_SEVEN / FLT_FOUR; // divides floating seven by floating four
	cout << FLT_SEVEN << DIVISIONSIGN << FLT_FOUR << USINGFLOAT;
	cout << resultFlt << endl;

	//second line
	resultInt = INT_SEVEN / INT_FOUR;
	cout << INT_SEVEN << DIVISIONSIGN << INT_FOUR << USINGINTEGER;
	cout << resultInt << endl;

	//third line
	resultInt = INT_MINUS_SEVEN / INT_FOUR;
	cout << INT_MINUS_SEVEN << DIVISIONSIGN << INT_FOUR << USINGINTEGER;
	cout << resultInt << endl;

	//fourth line
	resultInt = INT_SEVEN / INT_MINUS_FOUR;
	cout << INT_SEVEN << DIVISIONSIGN << INT_MINUS_FOUR << USINGINTEGER;
	cout << resultInt << endl;

	//fifth line
	resultInt = INT_MINUS_SEVEN / INT_MINUS_FOUR;
	cout << INT_MINUS_SEVEN << DIVISIONSIGN << INT_MINUS_FOUR << USINGINTEGER;
	cout << resultInt << endl;

	//sixth line
	resultInt = INT_SEVEN % INT_FOUR;
	cout << INT_SEVEN << MODULO << INT_FOUR << EQUALS;
	cout << resultInt << endl;

	//seventh line
	resultInt = INT_MINUS_SEVEN % INT_FOUR;
	cout << INT_MINUS_SEVEN << MODULO << INT_FOUR << EQUALS;
	cout << resultInt << endl;

	//eighth line
	resultInt = INT_SEVEN % INT_MINUS_FOUR;
	cout << INT_SEVEN << MODULO << INT_MINUS_FOUR << EQUALS;
	cout << resultInt << endl;

	//ninth line
	resultInt = INT_MINUS_SEVEN % INT_MINUS_FOUR;
	cout << INT_MINUS_SEVEN << MODULO << INT_MINUS_FOUR << EQUALS;
	cout << resultInt << endl << endl;

return 0;
}