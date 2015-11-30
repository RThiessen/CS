//Ronald Thiessen
//CS 1361
//Lab 10
/*This program lets the user enter an angle. the computer then converts the angle to radians.
It calculates the sin, cos and tan with math functions*/

//header files
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//strings
#define IDLINE "Ronald Thiessen - CS 1361 - Lab 10\n\n"
#define INPUT "Enter an angle in degrees: "
#define SINE "Sine:"
#define COSINE "Cosine:"
#define TANGENT "Tangent:"

int main()
{
	//variables
	double angle;
	double sine;
	double cosine;
	double tangent;
	double radian;

	cout << IDLINE << INPUT; // outputs first two lines

	cin >> angle; // allows user to input

	radian = angle * (3.14159 / 180); //converts radians to degrees

	sine = sin(radian); //takes the sine of input
	cosine = cos(radian); //takes the cosine of input
	tangent = tan(radian); //takes the tangent of input

	cout << fixed << setprecision(4); //allows only four decimal points.
	cout << "\n" << SINE << setw(18) << sine << endl //using setw to line up the decimal points
		<< COSINE << setw(16) << cosine << endl
		<< TANGENT << setw(15) << tangent << endl << endl;

return 0;
}