//Ronald Thiessen
//CS 1361
//Lab 16
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
#define IDLINE "Ronald Thiessen - CS 1361 - Lab 16\n\n"
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
#define INVALID "\tThe valid choices are 1 through 4. Select one of those.\n\n"
#define RADIUS_ERR "\n\tThe radius can not be less than zero.\n\n"
#define LENGTH_ERR "\n\tThe length can not be less than zero.\n\n"
#define WIDTH_ERR "\n\tThe width can not be less than zero.\n\n"
#define HEIGHT_ERR "\n\tThe height can not be less than zero.\n\n"
#define BASE_ERR "\n\tThe base can not be less than zero.\n\n"
#define ENTER_RAD "\tEnter the radius again: ";
#define ENTER_LENGTH "\tEnter the length again: ";
#define ENTER_WIDTH "\tEnter the width again: ";
#define ENTER_BASE "\tEnter the base again: ";
#define ENTER_HEIGHT "\tEnter the height again: ";

//const PI
const double PI = 3.14159;

int main()
{
	//variables

	int choice = 0;//menu choice

	//doubles used in formulas
	double radius,
		   length,
		   width,
		   base,
		   height,
		   area;

	cout << IDLINE;

	//use do while loop
	do
	{
		//Menu
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
			while (radius <= 0) // while loop if radius is less than 0
			{
				cout << RADIUS_ERR; //outputs error message. same on all cases
				cout << ENTER_RAD;
				cin >> radius; //another chance if user inputs invalid integer

			}
			cout << endl;

			area = PI * pow(radius, 2); //formula for area of a circle

			cout << fixed << setprecision(4); //four decimal places
			cout << AREA;
			cout << area;
			cout << endl;
			cout << endl;
			break;

		case 2:
			cout << LENGTH;

			cin >> length;
			while (length <= 0) // while loop if length is less than 0
			{

				cout << LENGTH_ERR;
				cout << ENTER_LENGTH;
				cin >> length;
			}

			cout << endl;
			cout << WIDTH;

			cin >> width;

			while (width <= 0)  // while loop if width is less than 0
			{

				cout << WIDTH_ERR;
				cout << ENTER_WIDTH;
				cin >> width;
			}
			area = width * length; //formula for area of a rectangle

			cout << endl;
			cout << fixed << setprecision(4); //four decimal places
			cout << AREA;
			cout << area;
			cout << endl;
			cout << endl;

			break;

		case 3:
			cout << BASE;

			cin >> base;
			while (base <= 0) // while loop if base is less than 0
			{
				cout << BASE_ERR;
				cout << ENTER_BASE;
				cin >> base;
			}
			cout << endl;
			cout << HEIGHT;

			cin >> height;

			while (height <= 0) // while loop if height is less than 0
			{
				cout << HEIGHT_ERR;
				cout << ENTER_HEIGHT;
				cin >> height;
				cout << endl;
			}
			area = base * height * .5; //formula for area of a triangle

			cout << fixed << setprecision(4);
			cout << AREA;
			cout << area;
			cout << endl;
			cout << endl;

			break;

		case 4:
			cout << ENDING; //this case ends the program
			break;

		default:
			cout << INVALID; //if the users choice is not 1, 2, or 3, it will output an error message
		}
	} while (choice != 4); //runs the program once, then checks choice

	return 0;

}