#include "BinaryMaxHeap.h"
#include <fstream>

int BinaryMaxHeap::parentIndex(int child)
{
    int parent = (child - 1) / 2;
    if (child == 0)
        return -1;
    else
        return parent;
}

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
        
        heapifyup(parentIndex(index));
    }
}
    
void BinaryMaxHeap::Insert(Number element) 
{
    heap.push_back(element);
    heapifyup(heap.size() - 1);
}
    
void BinaryMaxHeap::showHeap() {
    
    ofstream  writeFile;
    writeFile.open("output-q2-a2.txt");

        for (Number p : heap)
        {
            cout << p.number1 << " ";
            writeFile << p.number1 << " ";  
        }
        cout << endl;
        
        writeFile.close();
    }
