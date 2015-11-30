//Ronald Thiessen
//CS 1361
//Lab 21
/*
The program asks the user to enter an item’s wholesale cost and its
markup percentage. It will then display the item’s retail price.
*/

//Header files
#include <iostream>
#include <iomanip>

using namespace std;

//constants
#define ID "Ronald Thiessen - CS 1361 - Lab 21\n\n"
#define COST "Enter the item's wholesale cost: "
#define MARKUP "Enter the item's markup percentage: "
#define RETAIL "The item's retail price is $"
#define INVALID "\nPlease do not input numbers less than 0. Try again: "

void calculateRetail(double, double); //function prototype

int main()
{
	//variables for input
	double cost, percent;

	cout << ID << COST;
	cin >> cost;

	while (cost < 0) //validity check
	{
		cout << INVALID;
		cin >> cost;
	}

	cout << endl << MARKUP;
	cin >> percent;
	while (percent < 0) //validity check
	{
		cout << INVALID;
		cin >> percent;
	}

	if (!(percent < 1 && percent > 0)) //if user enters in decimal form the program will still work
	{
		percent /= 100;
	}

	cout << endl;

	calculateRetail(cost, percent); //passing through through to calculateRetail function

	return 0;
}

void calculateRetail(double num1, double num2) //calculateRetail function that calculates the retail price
{
	cout << showpoint << fixed << setprecision(2);
	cout << RETAIL << (num2 * num1) + num1 << endl << endl;
}