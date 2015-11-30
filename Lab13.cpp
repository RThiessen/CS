//Ronald Thiessen
//CS 1361
//Lab 13
/*this program allows the user to pick from air, water, or steel and input a distance
the program will calculate how long it will take the soundwave to go
for which meduium and distance the user inputs
*/

#include <iostream>
#include <iomanip>

using namespace std;

//constants
#define IDLINE "Ronald Thiessen - CS 1361 - Lab 13\n\n"
#define SELECT "Select a medium for the sound to travel through from the list below.\n1. Air\n2. Water\n3. Steel\n\n"
#define CHOICE "Enter your choice: "
#define DISTANCE "Enter the distance the soundwave is to travel in feet: "
#define SOUND "The sound wave can travel "
#define FEET " feet in "
#define SECONDS " seconds.\n\n"
#define INVALID "Enter only 1, 2, or 3 for medium.\n\n"
#define POSITIVE "You may only enter positive numbers for distance.\n\n"

int main()
{
	//two inputs for user
	int choice,
		distance;

	//put the mediums as doubles
	double air,
		   water,
		   steel,
		   calc; //calc is the calulation of (distance) / (ft/s)

	air = 1100; //feet per second
	water = 4900; //feet per second
	steel = 16400; // feet per second

	cout << IDLINE << SELECT << CHOICE;
	cin >> choice;
	cout << endl;


	if (choice == 1)
	{
		cout << DISTANCE; 
		cin >> distance;
		cout << endl;
		if (distance < 0) //if the distance less than one it will notify the user their input is invalid
			cout << POSITIVE;
		else
		{
			calc = distance / air;
			cout << fixed << setprecision(4); //to four decimal places
			cout << SOUND << distance << FEET << calc << SECONDS;
		}
	}
	else if (choice == 2)
	{
		cout << DISTANCE;
		cin >> distance;
		cout << endl;
		if (distance < 0) //if the distance less than one it will notify the user their input is invalid
			cout << POSITIVE;
		else
		{
			calc = distance / water; //if the choice is 2 the program will divide the distance by water which is 4900 ft/s
			cout << fixed << setprecision(4); //to four decimal places
			cout << SOUND << distance << FEET << calc << SECONDS;
		}
	}
	else if (choice == 3)
	{
		cout << DISTANCE;
		cin >> distance;
		cout << endl;
		if (distance < 0) //if the distance less than one it will notify the user their input is invalid
			cout << POSITIVE;
		else
		{
			calc = distance / steel;
			cout << fixed << setprecision(4); //to four decimal places
			cout << SOUND << distance << FEET << calc << SECONDS;
		}
	}
	else // if the choice is not 1, 2, or 3 the program will notify the user their input is invalid
		cout << INVALID;

	return 0;
}