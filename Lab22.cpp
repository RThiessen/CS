//Ronald Thiessen
//CS 1361
//Lab 22
//This program converst Celsius to Farenheit
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#define DG_FAHRENHEIT " degrees Fahrenheit. \n\n"
#define EQUALTO " degreees Celsius is equal to "
#define IDLINE "Ronald Thiessen - CS 1361 - Lab 22 \n \n"
#define ENTER "Enter the degrees Celsius to be converted to Fahrenheit: "

const double INT_THIRTY_TWO = 32;
const double INT_NINE = 9;
const double FLT_FIVE = 5;

double convertCelsius(double); //function prototype

int main()
{
	//local varibles
	double fahrenheit;
	double temp;
	
	cout << IDLINE; //Name and class
	cout << ENTER;

	cin >> temp;

	cout << endl;
	fahrenheit = convertCelsius(temp); //call function
	cout << showpoint << fixed << setprecision(2);
	cout << temp << EQUALTO << fahrenheit << DG_FAHRENHEIT; //Prints to screen
	return 0;
}

double convertCelsius(double num) //define function
{
	return (INT_NINE * num / FLT_FIVE) + INT_THIRTY_TWO;
}