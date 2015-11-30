//Ronald Thiessen
//CS 1361
//Lab 12
/*this program allows the user to input five numbers
//if the number is negative, the user will be asked to try again
the average and total of the five inputted numbers will be displayed at the end*/

//Header files
#include <iostream>
#include <iomanip>

using namespace std;

//strings used later in the program
#define IDLINE "Ronald Thiessen CS 1361 - Lab 12\n\n"
#define ONE "Enter a number <1 of 5>: "
#define TWO "Enter a number <2 of 5>: "
#define THREE "Enter a number <3 of 5>: "
#define FOUR "Enter a number <4 of 5>: "
#define FIVE "Enter a number <5 of 5>: "
#define NOT "Number was not positive.\nPlease try again."
#define AVERAGE "The average of the five numbers is "
#define TOTAL "The total of the five numbers is "

int main()
{
	//variables
	int input1,
		input2,
		input3,
		input4,
		input5;

	double avg; //average is a double

	double total = 0;

	cout << IDLINE
		<< ONE;

	cin >> input1; //lets user input the first number

	while(input1 < 0) //if the users input is greater than 0 it will add it to the total
	{

		cout << NOT << endl << ONE; // if the user enters a negative number, they will be asked try again
		cin >> input1;
	}
	if (input1 < 0);
	{
		total += input1;
	}

	cout << TWO;
	cin >> input2; //lets user input the second number

	if (input2 > 0)
		total += input2;
	else
	{
		cout << NOT << endl << TWO;
		cin >> input2;
		total += input2;
	}

	cout << THREE;
	cin >> input3; //lets user input the third number

	if (input3 > 0)
		total += input3;
	else
	{
		cout << NOT << endl << THREE;
		cin >> input3;
		total += input3;
	}

	cout << FOUR; //lets user input the fourth number
	cin >> input4;

	if (input4 > 0)
		total += input4;
	else
	{
		cout << NOT << endl << FOUR;
		cin >> input4;
		total += input4;
	}

	cout << FIVE;
	cin >> input5; //lets user input the fifth number

	if (input5 > 0)
		total += input5;
	else
	{
		cout << NOT << endl << FIVE;
		cin >> input5;
		total += input5;
	}


	avg = (total) / 5; //calculates the average by taking the total
	// and dividing it by 5

	cout << endl << TOTAL << total; //displays the total

	cout << fixed << setprecision(4); //only displays four decimal points
	cout << endl << endl << AVERAGE << avg << endl << endl;

	return 0;
}