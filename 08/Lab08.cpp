//Ronald Thiessen
//CS 1361
//Lab 8
//This program calculates the assessment value and propertty based on the input from the user

#include <iostream>
#include <iomanip>

using namespace std;

#define IDLINE "Ronald Thiessen - CS 1361 - Lab 8\n\n"
#define INPUT "Enter the actual value of the property: "
#define AV "Assessment Value: "
#define PT "Property Tax: "
#define DOLLAR "$"

//constants
const double PROP_TAX = .0064;
const double ASSESS_VAL = .6;


int main()
{
	//doubles
	double tax;
	double assessment;
	double actual;

	cout << IDLINE << INPUT; // Outputs Idline and instruction for the user
	cin >> actual; // allows the user to input the actual value of the property
	cout << endl;

	assessment = actual * ASSESS_VAL; //Multiplies the input of the user by .6
	tax = assessment * PROP_TAX; //calculates the property tax by taking the assessment value and multiplying it by .0064

	cout << fixed << showpoint << setprecision(2) //takes it to two decimal places
		<< AV << DOLLAR << setw(6) << assessment << endl //setw takes 6 characters
	    << PT << DOLLAR << setw(6) << tax << endl << endl;

return 0;
}