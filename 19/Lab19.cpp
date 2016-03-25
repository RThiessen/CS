//Ronald Thiessen
//CS 1361
//Lab 19
/*This program will read in an external file and output to Lab19.out
*/

//header files
#include <iostream>
#include <fstream> //fstream needed for input and output of files
using namespace std;

//constants
#define ID "Ronald Thiessen - CS 1361 - Lab 19\n\n"
#define POP "PRAIRIEVILLE POPULATION GROWTH\n(each * represents 1000 people)\n\n"
#define ERR "Error opening the file.\n"

int main()
{
	//variables
	int population, star;

	//name input file and output file
	ifstream inFile;
	ofstream outFile;

	//open files
	inFile.open("Lab19.dat");
	outFile.open("Lab19.out");

	//IDLINE
	cout << ID << POP;
	outFile << ID << POP; //output everything to Lab19.out and console output

	if (inFile) //valid statement
	{

		for (int year = 1900; year <= 2000; year += 20)
		{
			cout << year << "  ";
			outFile << year << "  ";
			inFile >> population;

			star = population / 1000; //rounds down every time

			for (int count = 1; count <= star; count++) //nested for loop that tests how many stars are needed
			{
				cout << "*";
				outFile << "*";
			}
			cout << endl;
			outFile << endl;
		}
		cout << endl;
		outFile << endl;
	}
	else //if the file does not exist, output error message
	{
		cout << ERR;
		outFile << ERR;
	}
	//close the files, the program has come to an end
	inFile.close();
	outFile.close();

	return 0;
}