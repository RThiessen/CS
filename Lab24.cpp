//Ronald Thiessen
//CS 1361
//Lab 24
/*This program will read in an external file and uses arrays to display them
the second part uses a bubble sort to order the numbers
*/

//header files
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

const int ARRAY_SIZE = 10;

//ID
#define ID "Ronald Thiessen - CS 1361 - Lab 24\n\n"

void bubbleSort(int[], int);

int main()
{
	//declare array
	int array[ARRAY_SIZE];

	//name input and output file
	ifstream inFile;
	ofstream outFile;

	//open file
	inFile.open("Lab24.dat");

	if (inFile) //validation statement
	{
		outFile.open("Lab24.out");
		cout << ID;
		outFile << ID;
		cout << "Numbers in original order\n";

		//For loop for how many elements in ARRAY_SIZE
		for (int count = 0; count < ARRAY_SIZE; count++)
		{
			inFile >> array[count];
			cout << setw(2) << array[count];
			cout << endl;
		}
		//close file
		inFile.close();

		cout << "\nNumbers in sorted order" << endl;
		outFile << "\nNumbers in sorted order" << endl;

		for (int count = 0; count < ARRAY_SIZE; count++)
		{
			bubbleSort(array, ARRAY_SIZE);
			cout << setw(2) << array[count] << endl;
			outFile << setw(2) << array[count] << endl;
		}
		cout << "\n\nThat's all folks!!!\n\n";

		//close file
		outFile.close();
	}
	else //if the file does not exist, output error message
	{
		cout << "Error opening the file.\n\n";
	}
	
	return 0;
}
void bubbleSort(int array[], int size) //definition of bubble sort
{
	bool swap;
	int temp;

	do
	{
		swap = false; //flag
		for (int counter = 0; counter < size - 1; counter++)
		{
			//Swapping element in if statement    
			if (array[counter] > array[counter + 1])
			{
				temp = array[counter];
				array[counter] = array[counter + 1];
				array[counter + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}