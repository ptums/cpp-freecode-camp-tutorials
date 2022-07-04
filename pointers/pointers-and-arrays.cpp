#include <iostream>
using namespace std;

int main()
{
 // common uses of pointers is to use them with arrays
 
  int luckyNums[5] = {23,19,15,11};
  // prints out the address of the array
  //  which is the same as the first index of the array position
  cout << luckyNums << endl;
  // prints out the address of the first num in array
  cout << &luckyNums[0] << endl;

  // will print out the value of index 2 in the array
  cout  << luckyNums[2] << endl;

  // alt way by looking for the address and then dereferencing
  cout << *(luckyNums + 2) << endl;


  return 0;
}
