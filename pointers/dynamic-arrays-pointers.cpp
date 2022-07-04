#include <iostream>
using namespace std;

int main () 
{

  // an array is a type of collection which stores elements in continuous memory
  // it stores elements one after another

  // we are setting 5 containers with the data type of int
  // in memory
  int myArr[5];

  // dynamic size arrays
  // There is a way to allocate and deallocate dynamic amount
  // of memory
  int size;
  cout << "Size: ";
  cin >> size;
  int* myDynArray = new int[size];

  for(int i = 0; i < size; i++){
    cout << "myDynArray[" << i << "]";
    cin >> myDynArray[i];
  }

  for(int i = 0; i < size; i++){
   // cout << myDynArray[i] << endl;
   // this is the derefencing pointer approach
   cout << *(myDynArray +i) << endl;
  }


  delete[]myDynArray;
  myDynArray = NULL;



 return 0;
}
