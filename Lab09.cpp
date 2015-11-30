//Ronald Thiessen
//CS 1361
//Lab 9
//This program takes two random numbers and adds them together when the user has pressed enter

//Header files
#include <iostream>
#include <iomanip>
#include <ctime> //this header imports time
#include <cstdlib> // used for generating random numbers

using namespace std;

//Strings
#define IDLINE "Ronald Thiessen - CS 1361 - Lab 9\n\n"
#define ENTER "Press the ENTER key when you are ready to see the answer.\n\n"
#define DASH "-----"
#define PLUS "+ "
#define SPACE "  "

int main()
{
	unsigned seed = (0);
	int num1,
		num2,
		answer;

	seed = time(0); //sets time to 0
	srand(seed);
	
	num1 = rand() % 500 + 1; //the range for num1 is 1 - 500
	num2 = rand() % 500 + 1; //the range for num2 is 1 - 500

	cout << IDLINE << ENTER; //Outputs the Id line and user instructions
	cout << SPACE << setw(5) << num1 << endl; //Proper formatting using setw
	cout << PLUS << setw(5) << num2 << endl << SPACE << DASH;

	cin.ignore();//pauses the program so the user can work out the math problem

	answer = num1 + num2; //adds random number 1 and 2

	cout << setw(7) << answer << endl << endl;

return 0;
}