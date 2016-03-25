//Ronald Thiessen
//CS 1361
//Lab 14
/*This program will allow the user allow to choose
from a menu and either calculate the area of a circle,
area of a triangle, or area of a rectangle
*/

#include <iostream>
#include <iomanip>
#include <cmath>
//cmath for pow function

using namespace std;

//constants
#define IDLINE "Ronald Thiessen - CS 1361 - Lab 14\n\n"
#define GEO "Geometry Calculator\n\n"
#define CIRCLE "\t1. Calculate the area of a Circle\n"
#define RECTANGLE "\t2. Calculate the area of a Rectangle\n"
#define TRIANGLE "\t3. Calculate the area of a Triangle\n"
#define QUIT "\t4. Quit\n\n";
#define ENTER "\tEnter your choice <1, 2, 3, or 4>: "
#define AREA "\tThe area is ";
#define RADIUS "\tEnter the circle's radius: "
#define LENGTH "\tEnter the rectangle's length: "
#define WIDTH "\tEnter the rectangle's width: "
#define BASE "\tEnter the length of the base: "
#define HEIGHT "\tEnter the triangle's height: "
#define ENDING "Program ending.\n\n"
#define INVALID "\tThe valid choices are 1 through 4. Run the \n\tprogram again and select one of those.\n\n"
#define RADIUS_ERR "\n\tThe radius can not be less than zero.\n\n"
#define LENGTH_ERR "\n\tThe length can not be less than zero.\n\n";
#define WIDTH_ERR "\n\tThe width can not be less than zero.\n\n";
#define HEIGHT_ERR "\n\tThe height can not be less than zero.\n\n"
#define BASE_ERR "\n\tThe base can not be less than zero.\n\n"

//const PI
const double PI = 3.14159;

int main()
{
	//variables

	int choice; //menu choice

	//doubles used in formulas
	double radius,
		length,
		width,
		base,
		height,
		area;

	//outputting the menu
	cout << IDLINE;
	cout << GEO;
	cout << CIRCLE;
	cout << RECTANGLE;
	cout << TRIANGLE;
	cout << QUIT;
	cout << ENTER;

	cin >> choice;
	cout << endl;

	//using a switch instead of if/else
	switch (choice)
	{
	case 1:
		cout << RADIUS;

		cin >> radius;
		if (radius > 0) // if the radius is greater than 0, it will go on and calculate and output the area
		{
			cout << endl;

			area = PI * pow(radius, 2); //formula for area of a circle

			cout << fixed << setprecision(4); //four decimal places
			cout << AREA;
			cout << area;
			cout << endl;
			cout << endl;
		}
		else //if the radius is less than 0, it will output an error message
		{
			cout << RADIUS_ERR;
		}
		break;

	case 2:
		cout << LENGTH;

		cin >> length;
		if (length > 0) // if the length is greater than 0, it will go on let the user input width
		{

			cout << endl;
			cout << WIDTH;

			cin >> width;

			if (width > 0)  // if the width is greater than 0, it will go on and calculate area
			{

				cout << endl;

				area = width * length; //formula for area of a rectangle

				cout << fixed << setprecision(4); //four decimal places
				cout << AREA;
				cout << area;
				cout << endl;
				cout << endl;
			}
			else // if the width is less than 0, it will output an error message
			{
				cout << WIDTH_ERR;
			}
		}
		else // if the length is less than 0, it will output an error message
		{

			cout << LENGTH_ERR;
		}
		break;

	case 3:
		cout << BASE;

		cin >> base; // if the base is greater than 0, it will go on let the user input height
		if (base > 0)
		{

			cout << endl;
			cout << HEIGHT;

			cin >> height;
			if (height > 0) // if the height is greater than 0, it will go on and calculate the area
			{
				cout << endl;

				area = base * height * .5; //formula for area of a triangle

				cout << fixed << setprecision(4);
				cout << AREA;
				cout << area;
				cout << endl;
				cout << endl;
			}
			else // if the height is less than 0, it will output an error message
			{
				cout << HEIGHT_ERR;
			}
		}
		else // if the base is less than 0, it will output an error message
		{
			cout << BASE_ERR;
		}
		break;

	case 4:
		cout << ENDING;
		return 0;

	default:
		cout << INVALID; //if the users choice is not 1, 2, or 3, it will output an error message
	}

	return 0;

}