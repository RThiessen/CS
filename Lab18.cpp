//Ronald Thiessen
//CS 1361
//Lab 18
/*This program will calculate how much a person would earn over a period of time if his or her  
salary is one penny the first day and two pennies the second day, and continues
to double each day
*/

#include <iostream>
#include <iomanip>

using namespace std;

//constants
#define ID "Ronald Thiessen - CS 1361 - Lab 18\n\n"
#define MANY "For how many days will the pay double? "
#define DAY "Day \t\tTotal Pay"
#define DASH "----------------------------------"
#define INVALID "\nNot a valid number of days. Input days again: "
#define TOTAL "Total"

int main()
{
	//variables
	int days = 1;
	double pay = .01;
	double total = 0;

	cout << ID << MANY;
	cin >> days; //user input days
	cout << endl;
	while (days < 1) //while loop if days is less than zero
	{
		cout << INVALID;
		cin >> days;
	}
	cout << DAY << endl << DASH;

	for (int day_count = 1; day_count <= days; day_count++) //use for loop
	{
		//output day and pay
		cout << endl << setw(2) << day_count << "\t\t$ ";
		cout << fixed << setprecision(2);
		cout << setw(9) << pay; //have to output pay first or things would mess up

		//add the pay to total
		total += pay;

		//double the pay for the next day
		pay *= 2;
		
	}
	cout << fixed << setprecision(2);
	cout << endl << DASH << endl;
	cout << TOTAL << "\t\t$ " << setw(9) << total;
	cout << endl << endl;
	return 0;

}