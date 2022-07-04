#include <iostream>
using namespace std;

/**
 *
 * Pointers can be found in all programming languages
 * but most of them are abstracted away and hidden.
 * C++ allows you to control pointers
 **/
int main () 
{
 /**
  *  Pointers store a variable address
  **/

  int n = 5;
  cout << n << endl;
  
  // get the address of n by putting an & infront of it
  cout << &n << endl;
  
  // pointer will hold the value of &n
  int* ptr = &n;
  cout << ptr << endl;


  // access the value of the pointer by dereferencing it
   cout << *ptr << endl;


   // reassign a value to that memory location
   *ptr = 10;

   cout << *ptr << endl;

   // n is now 10 since we are updating value based on its value
   cout << n << endl;

   // pointers need to have a specified type 
   // if I change n to char we will get an error
   // so the pointer type and the value type need to be the same
  

   /**
    * int* ptr2;
    * *ptr2 = 7;
    * will throw an error
    * because ptr2 does not have an address
    *
    * what we need to do is have a variable to hold the value first
    * and then set the pointer to that variable
    *
    */
   int v;
   int* ptr2 = &v;
   *ptr2 = 7;

   cout << "v= " << v << endl;
  return 0;
}
