#include <iostream>
using namespace std;


void myFunc()
{
  // we are creating dynamic memory here
  // however this could cause an error
  // because we never release the memory
  // in this function
  int *ptr = new int[5];

  ptr[2] = 10;

  cout << "Hi, I am = " << ptr[2] << endl;
  delete[] ptr;
  ptr = NULL;
}


int main()
{

  myFunc();
  return 0;
}
