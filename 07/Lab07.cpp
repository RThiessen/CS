//Ronald Thiessen
//CS 1361
//Lab 7
//This program allows the user to input a diameter and the program calculates the number of slices that can be taken from a pizza of that size

#include <iostream>
#include <string>
using namespace std;

//const integers
const auto SLICE = 14.125;
const auto PI = 3.14159;

//Const strings
#define IDLINE "Ronald Thiessen - CS1361 - Lab 7\n\n" //Name and class
#define ENTER "Please enter the diameter of the pizza <in inches>: "
#define CUT "Cut this pizza into "
#define SL "slices."
#define SP " "
//SP is space
//Sl is slice

int main()
{
	float diameter;
	float radius;
	float area;
	int numSlices;

	cout << IDLINE << ENTER;
	cin >> diameter; //allows user to input diameter

	//calculations
	radius = diameter / 2; //we need radius so we divide diameter divided by two
	area = PI * pow(radius, 2); //calculates Pi * radius squared using pow
	numSlices = area / SLICE; //divides total are of a pizza divided by area of a single slice

	cout << endl << CUT << numSlices << SP << SL << endl << endl; //outputs the last line

return 0;
}
