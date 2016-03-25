//Ronald Thiessen
//CS 1361
//Lab 20
/*This program serves as a math tutor. The user can choose from a menu
which type of problem they want to work.
**NEW ADDITION**
using a void menu to display the menu

No if statements were used
*/

#include <iostream>
#include <iomanip>
#include <ctime> //this header imports time
#include <cstdlib> // used for generating random numbers

using namespace std;

#define ID "Ronald Thiessen - CS 1361 - Lab 20\n\n"
#define MENU "\n\n\t\tMath Tutor Menu\n"
#define ADD_MENU "1. Additon problem\n"
#define SUB_MENU "2. Subtraction problem\n"
#define MUL_MENU "3. Multiplication problem\n"
#define DIV_MENU "4. Division problem\n"
#define QUIT_MENU "5. Quit this program\n\n"
#define ENTER_CHOICE "Enter your choice <1-5>: "
#define CONGRATS "\n\nCongratulations! That's right!\n\n"
#define SORRY "\n\nSorry, the correct answer is "
#define THANK "\nThank you for using Math Tutor.\n\n"
#define INVALID "\n\nThe valid choices are 1, 2, 3, 4, and 5. Please choose one of those.\n\n "

//define function prototype
void menu();

int main()
{
	unsigned seed = (0);
	int choice = 0;
	int input, answer;
	int num1, num2;

	seed = time(0); //sets time to 0
	srand(seed);
	num1 = rand() % 500 + 1;

	cout << ID; //output ID line

	do
	{
		menu();

		cin >> choice;

		switch (choice)
		{
		case 1:
			num1 = rand() % 500 + 1; //the range for num1 is 1 - 500
			num2 = rand() % 500 + 1;
			cout << "\n\n" << "  " << setw(4) << num1 << endl; //Proper formatting using setw
			cout << "+" << setw(5) << num2 << endl << "  " << "----" << endl;
			cout << "   ";
			answer = num1 + num2;
			cin >> input;
			while (input == answer)
			{
				cout << CONGRATS;
				break;
			}
			while (input != answer)
			{
				cout << SORRY << answer << ".\n\n";
				break;
			}
			break;

			//subtraction
		case 2:
			do
			{
				num1 = rand() % 999 + 1; //the range for num1 is 1 - 999
				num2 = rand() % 999 + 1;
			} while (num1 < num2);
			cout << "\n\n" << "  " << setw(4) << num1 << endl; //Proper formatting using setw
			cout << "-" << setw(5) << num2 << endl << "  " << "----" << endl;
			cout << "   ";
			answer = (num1 - num2);
			cin >> input;
			while (input == answer)
			{
				cout << CONGRATS;
				break;
			}
			while (input != answer)
			{
				cout << SORRY << answer << ".\n\n";
				break;
			}
			break;

			//multiplication
		case 3:
			num1 = rand() % 100 + 1; //the range for num1 is 1 - 100
			num2 = rand() % 9 + 1;
			cout << "\n\n" << "  " << setw(4) << num1 << endl; //Proper formatting using setw
			cout << "*" << setw(5) << num2 << endl << "  " << "----" << endl;
			cout << "   ";
			answer = num1 * num2;
			cin >> input;
			while (input == answer)
			{
				cout << CONGRATS;
				break;
			}
			while (input != answer)
			{
				cout << SORRY << answer << ".\n\n";
				break;
			}
			break;

			//division
		case 4:
			do
			{
				num1 = rand() % 50 + 1; //the range for numerator is 1 - 50
				num2 = rand() % 9 + 1;
			} while ((num1 % num2) != 0);

			/*div_num2 = rand() % 9 + 1;
			div_num1 = div_num2 * (rand() % 50 + 1);*/ //alternate method. I chose to use do while becasue it was easier

			cout << endl << "  " << num1 << " " << "/" << " " << num2 << " = ";
			answer = num1 / num2;
			cin >> input;
			while (input == answer)
			{
				cout << CONGRATS;
				break;
			}
			while (input != answer)
			{
				cout << SORRY << answer << ".\n\n";
				break;
			}
			break;

		case 5:
			cout << THANK;
			break;
		default: cout << INVALID;
		}


	} while (choice != 5);

	return 0;

}
//***Definition of menu function***

void menu()//using a void menu to display the menu
{
	cout << MENU << ADD_MENU << SUB_MENU << MUL_MENU
		<< DIV_MENU << QUIT_MENU << ENTER_CHOICE;
}