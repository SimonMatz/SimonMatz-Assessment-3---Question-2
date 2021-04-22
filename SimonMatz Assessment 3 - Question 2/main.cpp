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

	//variable to store amount of numbers from line 1 of input file
	int amountOfNumbers;
	readFile >> amountOfNumbers;

	//using pointers to create dynamic size array
	int* numbersToInsert = new int[amountOfNumbers];
	//variable for looping through array
	int count1 = 0;

	//looping through line 2 until end of file and storing numbers in array
	while (!readFile.eof())
	{
		readFile >> numbersToInsert[count1];
		count1++;
	}
	readFile.close();

	//creating empty heap
	BinaryMaxHeap numbersHeap;

	//looping through the dynamic array to insert into our heap "numbersHeap"
	for (int i = 0; i < amountOfNumbers; i++)
	{
		numbersHeap.Insert(numbersToInsert[i]);
	}

	//calling heap output function
	numbersHeap.showHeap();

	cout << "Insertion complete!\n\n\n";

	//deleting the temp array to avoid memory leak
	delete[] numbersToInsert;
}