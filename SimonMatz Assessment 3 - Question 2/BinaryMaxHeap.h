#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include "Number.h"

using namespace std;

class BinaryMaxHeap
{
public:

	vector<Number> heap;
	
	int parentIndex(int child);
	void heapifyup(int index);
	void Insert(Number element);
	void showHeap();
};

