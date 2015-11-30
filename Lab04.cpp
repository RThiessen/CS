//Ronald Thiessen
//CS 1361
//Lab 4
//This program converst Celsius to Farenheit
#include <iostream>
#include <string>

using namespace std;

const string DG_FAHRENHEIT = " degrees Fahrenheit. \n\n";
const string EQUALTO = " degreees Celsius is equal to ";
const string IDLINE = "Ronald Thiessen - CS 1361 - Lab 4 \n \n";

const int INT_THIRTY_TWO = 32;
const int INT_NINE = 9;
const float FLT_FIVE = 5;
const float CELSIUS = 43.0; //the number that is converted to Fahrenheit

int main()
{
	float fahrenheit;
	fahrenheit = (INT_NINE * CELSIUS / FLT_FIVE) + INT_THIRTY_TWO; //the formula to convert celsius to fahrenheit
	
	cout << IDLINE; //Name and class

	cout << CELSIUS << EQUALTO << fahrenheit << DG_FAHRENHEIT; //Prints to screen


return 0;
}

