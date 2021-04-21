#include <iostream>
#include <string>
#include <fstream>
#include "BinaryMaxHeap.h"

using namespace std;

void main() 
{
	//reading from input file
	ifstream readFile;
	readFile.open("input-q2-a2.txt");

	int amountOfNumbers;

	readFile >> amountOfNumbers;

	//using pointers to create dynamic size array
	int* numbersToInsert = new int[amountOfNumbers];
	//variable for looping through array
	int count1 = 0;

	//looping through line 4 until end of file and storing numbers in array
	while (!readFile.eof())
	{
		readFile >> numbersToInsert[count1];
		count1++;
	}

	readFile.close();

	BinaryMaxHeap numbersInserted;

	for (int i = 0; i < amountOfNumbers; i++)
	{
		numbersInserted.Insert(numbersToInsert[i]);
	}


	numbersInserted.showHeap();

	//deleting the temp array to avoid memory leak
	delete[] numbersToInsert;
}