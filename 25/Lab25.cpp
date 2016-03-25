// Ronald Thiessen
// CS 1361
// Lab 25
// This program uses parallel arrays to keep track of sales of different type of salsa

//header files
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//constants
#define ID "Ronald Thiessen - CS 1361 - Lab 25\n\n"
#define SOLD "Jars sold last month of "

//size of array
const int ARRAY_SIZE = 5;

//function prototypes
int totalValue(int[]);
int largestValue(int[]);
int smallestValue(int[]);


//main function
int main()
{
	//defining arrays
	string salsaNames[ARRAY_SIZE] = { "mild  ", "medium", "sweet ", "hot   ", "zesty " };
	int salsaJarsSold[ARRAY_SIZE];

	cout << ID;
	//for loop to let user input sales data
	for (int count = 0; count < ARRAY_SIZE; count++)
	{
		cout << "Jars sold last month of " << salsaNames[count] << ": ";
		cin >> salsaJarsSold[count];
		//validation statment
		while (salsaJarsSold[count] < 0)
		{
			cout << "Please enter a positive number for jars sold : ";
			cin >> salsaJarsSold[count];
		}
	}
	cout << endl << "      Salsa Sales Report\n\n" << "Name         "
		<< "         Jars Sold\n";
	cout << "________________________________\n";
	//for loop to output the table of jars sold and keeps them in line with the names
	for (int count = 0; count < ARRAY_SIZE; count++)
	{
		cout << salsaNames[count] << setw(25) << salsaJarsSold[count] << endl;
	}

	//function call and assigns them to a variable
	int total = totalValue(salsaJarsSold); //argument of salsaJarsSold to functions
	int highSeller = largestValue(salsaJarsSold);
	int lowestSeller = smallestValue(salsaJarsSold);

	cout << "\n" << "Total Sales: " << setw(18) << total << endl;
	cout << "High Seller: " << salsaNames[highSeller] << endl;	 //outputs the highest seller by using the highSeller  and lowSeller
	cout << "Low Seller : " << salsaNames[lowestSeller] << endl; //variable and outputting the string for the corresponding salsa type
	return 0;
}

int largestValue(int array[]) //defining the largestValue function
{
	int largest = 0; //variable largest set = to 0
	for (int count = 1; count < ARRAY_SIZE; count++) //for loop to run the amount of times it finds the smallest
	{
		if (array[count] > array[largest]) //if the second value is larger than the first one count gets
		{								  // assigned to largest
			largest = count;
		}
	}
	return largest;
}

int smallestValue(int array[]) //defining the largestValue function
{
	int smallest = 0; //variable smallest set = to 0

	for (int count = 1; count < ARRAY_SIZE; count++) //for loop to run the amount of times until it finds the smallest
	{
		if (array[count] < array[smallest])
		{
			smallest = count;
		}
	}
	return smallest;
}
int totalValue(int array[]) //definition of the total function
{
	int total = 0;
	for (int count = 0; count < ARRAY_SIZE; count++)
	{
		total += array[count]; //for loop to calulate total of all user inputs
	}
	return total; //returns total as int data type
}