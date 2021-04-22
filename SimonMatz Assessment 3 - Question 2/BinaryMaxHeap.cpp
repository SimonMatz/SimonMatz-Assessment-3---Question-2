#include "BinaryMaxHeap.h"
#include <fstream>

//returns the parent node which is needed by heapify up function
int BinaryMaxHeap::parentIndex(int child)
{
    int parent = (child - 1) / 2;
    if (child == 0)
        return -1;
    else
        return parent;
}

//used by Insert function - compares current node with parent node
//and swaps the smaller one to top if neccessary
void BinaryMaxHeap::heapifyup(int index)
{
   //changed from heap[index].number1 < heap[parentIndex(index)].number1)
    //to heap[index].number1 > heap[parentIndex(index)].number1)
    //to create max heap instead of min heap
    if (index >= 0 && parentIndex(index) >= 0 && heap[index].number1 > heap[parentIndex(index)].number1) 
    {
        Number temp = heap[index];
        heap[index] = heap[parentIndex(index)];
        heap[parentIndex(index)] = temp;
        
        //running again recursively
        heapifyup(parentIndex(index));
    }
}
 
//new numbers are inserted at lowest free spot of array
void BinaryMaxHeap::Insert(Number element) 
{
    heap.push_back(element);
    heapifyup(heap.size() - 1);
}
 
//outputs heap and writes into file
void BinaryMaxHeap::showHeap()
{ 
    ofstream  writeFile;
    writeFile.open("output-q2-a2.txt");

        for (Number p : heap)
        {
            // writing values into file
            writeFile << p.number1 << " ";  
        }
        writeFile.close();
}
