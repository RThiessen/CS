//Ronald Thiessen
//CS 1361
//Lab 17
/*This program serves as a math tutor. The user can choose from a menu
which type of problem they want to work
No if statements were used
*/

#include <iostream>
#include <iomanip>
#include <ctime> //this header imports time
#include <cstdlib> // used for generating random numbers

using namespace std;

void menu();
void master();

//constants
#define ID "Ronald Thiessen - CS 1361 - Lab 17\n\n"
#define MENU "\tMath Tutor Menu\n"
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

int main()
{
	master();
	return 0;
}
void menu()
{
	cout << MENU << ADD_MENU << SUB_MENU << MUL_MENU
		<< DIV_MENU << QUIT_MENU << ENTER_CHOICE;
}
void master()
{
	unsigned seed = (0); //for random number
	int choice = 0; //choice variable

	//add integers
	int add_num1, add_num2, add_answer, add_input;

	//subtraction integers
	int sub_num1, sub_num2, sub_answer, sub_input;

	//div integers
	int div_num1, div_num2, div_answer, div_input;

	//multiplication integers
	int mul_num1, mul_num2, mul_answer, mul_input;

	seed = time(0); //sets time to 0
	srand(seed);
	cout << ID;

	do //using do while for whole block
	{

		menu();
		cin >> choice;

		switch (choice)
		{
		case 1:
			add_num1 = rand() % 500 + 1; //the range for num1 is 1 - 500
			add_num2 = rand() % 500 + 1;
			cout << "\n\n" << "  " << setw(4) << add_num1 << endl; //Proper formatting using setw
			cout << "+" << setw(5) << add_num2 << endl << "  " << "----" << endl;
			cout << "   ";
			cin >> add_input;
			add_answer = add_num1 + add_num2;
			while (add_input == add_answer)
			{
				cout << CONGRATS;
				break;
			}
			while (add_input != add_answer)
			{
				cout << SORRY << add_answer << ".\n\n";
				break;
			}
			break;

			//subtraction
		case 2:
			do
			{
				sub_num1 = rand() % 999 + 1; //the range for num1 is 1 - 999
				sub_num2 = rand() % 999 + 1;
			} while (sub_num1 < sub_num2);
			cout << "\n\n" << "  " << setw(4) << sub_num1 << endl; //Proper formatting using setw
			cout << "-" << setw(5) << sub_num2 << endl << "  " << "----" << endl;
			cout << "   ";
			cin >> sub_input;
			sub_answer = sub_num1 - sub_num2;
			while (sub_input == sub_answer) //if statement could be an alternate way of doing this.
			{
				cout << CONGRATS;
				break;
			}
			while (sub_input != sub_answer)
			{
				cout << SORRY << sub_answer << ".\n\n";
				break;
			}
			break;

			//multiplication
		case 3:
			mul_num1 = rand() % 100 + 1; //the range for num1 is 1 - 100
			mul_num2 = rand() % 9 + 1;
			cout << "\n\n" << "  " << setw(4) << mul_num1 << endl; //Proper formatting using setw
			cout << "*" << setw(5) << mul_num2 << endl << "  " << "----" << endl;
			cout << "   ";
			cin >> mul_input;
			mul_answer = mul_num1 * mul_num2;
			while (mul_input == mul_answer)
			{
				cout << CONGRATS;
				break;
			}
			while (mul_input != mul_answer)
			{
				cout << SORRY << mul_answer << ".\n\n";
				break;
			}
			break;

			//division
		case 4:
			do
			{
				div_num1 = rand() % 50 + 1; //the range for num1 is 1 - 50
				div_num2 = rand() % 9 + 1;
			} while ((div_num1 % div_num2) != 0);


			/*div_num2 = rand() % 9 + 1;
			div_num1 = div_num2 * (rand() % 50 + 1);*/ //alternate method

			cout << endl << "  " << div_num1 << " " << "/" << " " << div_num2 << " = ";
			cin >> div_input;
			div_answer = div_num1 / div_num2;
			while (div_input == div_answer)
			{
				cout << CONGRATS;
				break;
			}
			while (div_input != div_answer)
			{
				cout << SORRY << div_answer << ".\n\n";
				break;
			}
			break;


			break;

		case 5:
			cout << THANK;
			break;
		default: cout << INVALID;

		}

	} while (choice != 5);
}
