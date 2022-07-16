#include <iostream>
using namespace  std;

int main() {
    // 1. 5 containers of type int are created one after another in memory
    // This approaches is fast since items are stored in a continuous manner

    // 2. This is unlike linked list since they are stored in a non-continuous memory

    // disadvantage: it's hard to delete an element in the middle of an array
    // disadvantage: the length of the array needs to be constant at build time

    int myArray[5];

    // dynamic arrays allow functionality to release and grab a container in memory
    int size;
    cout << "Size: ";
    cin >> size;

    // new keyword will allocate memory when we need it
    int* dynArray = new int[size];


    for(int i = 0; i < size; i++)
    {
        cout << "dynArray[" << i << "] ";
        cin >> dynArray[i];
    }

    for(int i = 0; i < size; i++)
    {

        // alt to dereference the array
        // to use pointers
        cout <<  *(dynArray + i) << " ";

    }


    // when using dynamic arrays you as the programmer
    // are responsible for deallocating memory
    delete[] dynArray;

    return 0;
}
