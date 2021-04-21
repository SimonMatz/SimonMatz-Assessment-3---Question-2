#include <iostream>
#include <string>
#include "BinaryMaxHeap.h"

using namespace std;

void main() 
{
	BinaryMaxHeap numbersInserted;

	numbersInserted.Insert(Number(23));
	numbersInserted.Insert(Number(12));
	numbersInserted.Insert(Number(5));
	numbersInserted.Insert(Number(8));
	numbersInserted.Insert(Number(10));
	numbersInserted.Insert(Number(21));
	numbersInserted.Insert(Number(11));
	numbersInserted.Insert(Number(17));

	numbersInserted.showHeap();
}