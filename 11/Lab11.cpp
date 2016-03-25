//Ronald Thiessen
//CS 1361
//Lab 11
//This program takes two random numbers tells the user if they are right or wrong

//Header files
#include <iostream>
#include <iomanip>
#include <ctime> //this header imports time
#include <cstdlib> // used for generating random numbers

using namespace std;

//Strings
#define IDLINE "Ronald Thiessen - CS 1361 - Lab 11\n\n"
#define ENTER "Type in the correct answer then press the ENTER key:\n\n"
#define DASH "-----"
#define PLUS "+ "
#define SPACE "  "
#define CORRECT "Congratulations - your answer is correct!!!"
#define ANS "The correct answer is"

int main()
{
	unsigned seed = (0);
	int num1,
		num2,
		answer,
		input; //new variable for user input

	seed = time(0); //sets time to 0
	srand(seed);

	num1 = rand() % 500 + 1; //the range for num1 is 1 - 500
	num2 = rand() % 500 + 1; //the range for num2 is 1 - 500

	cout << IDLINE; //Outputs the Id line and user instructions
	cout << SPACE << setw(5) << num1 << endl; //Proper formatting using setw
	cout << PLUS << setw(5) << num2 << endl << SPACE << DASH << endl;
	cout << ENTER;

	cin >> input;
	answer = num1 + num2; //adds random number 1 and 2
	
	cout << endl << ANS << SPACE << answer << endl << endl; //outputs the correct answer

	if (input == answer) //if the user's input is correct the program will congratulate the user
		cout << endl << CORRECT << endl << endl;
	
	return 0;
}