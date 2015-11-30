//Ronald Thiessen
//CS 1361
//Lab 23
/*This program will let the user play rock, paper, scissors with the computer. The computer generates
a random number to choose.
*/

#include <iostream>
#include <ctime> //this header imports time
#include <cstdlib> // used for generating random numbers

using namespace std;

//constants
#define ID "Ronald Thiessen - CS 1361 - Lab 23\n\n"
#define MENU "Game Menu\n---------\n1) Rock\n2) Paper\n3) Scissors\n4) Quit\n\n"
#define ENTER "Enter your choice: "

//function protoypes
void menu();
void rock(int, int);
void paper(int, int);
void scissors(int, int);
void cpu(int);

int main()
{
	srand(time(0)); //generating random numbers

	int userChoice = 0;
	int cpuChoice = rand() % 3 + 1;

	cout << ID;

	//do while loop for the everyting besides ID
	do
	{
		cpuChoice = rand() % 3 + 1; //use to generate rock, paper, or scissors

		menu(); //call menu function
		cout << ENTER;

		cin >> userChoice; //user input choice

		switch (userChoice)
		{
		case 1:
			cout << "You selected: Rock\n";
			cpu(cpuChoice); //call cpu choice
			rock(cpuChoice, userChoice); //call rock function
			break;
		case 2:
			cout << "You selected: Paper\n";
			cpu(cpuChoice);
			paper(cpuChoice, userChoice); //call paper function
			break;
		case 3:
			cout << "You selected: Scissors\n";
			cpu(cpuChoice);
			scissors(cpuChoice, userChoice); //call scissors function
			break;
		case 4:
			cout << "\nThank you for playing.\n\n"; //ends program
			break;

		default:
			cout << "\nInvalid. Please choose one of the menu choices.\n\n"; //validation
		}

	} while (userChoice != 4); //quit if user chooses quit option

	return 0;
}

//define functions

void menu()
{
	cout << MENU;
}

void rock(int cpuChoice, int userChoice)
{
	if (cpuChoice == userChoice)
	{
		cout << "Tie. No Winner.\n\n";
	}
	if (cpuChoice == 2)
	{
		cout << "Computer wins! Paper wraps rock.\n\n";
	}
	if (cpuChoice == 3)
	{
		cout << "You win! Rock smashes scissors.\n\n";
	}
}
void paper(int cpuChoice, int userChoice)
{
	if (cpuChoice == userChoice)
	{
		cout << "Tie. No Winner.\n\n";
	}
	if (cpuChoice == 1)
	{
		cout << "You win! Paper wraps rock.\n\n";
	}
	if (cpuChoice == 3)
	{
		cout << "Computer wins! Scissors cuts paper.\n\n";
	}
}
void scissors(int cpuChoice, int userChoice)
{
	if (cpuChoice == userChoice)
	{
		cout << "Tie. No Winner.\n\n";
	}
	if (cpuChoice == 1)
	{
		cout << "Computer wins! Rock smashes scissors.\n\n";
	}
	if (cpuChoice == 2)
	{
		cout << "You win! Scissors cuts paper.\n\n";
	}
}
void cpu(int num)
{
	if (num == 1)
	{
		cout << "The computer selected: Rock\n";
	}
	if (num == 2)
	{
		cout << "The computer selected: Paper\n";
	}
	if (num == 3)
	{
		cout << "The computer selected: Scissors\n";
	}
}