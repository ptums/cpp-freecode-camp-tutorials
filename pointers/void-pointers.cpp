#include <iostream>
using namespace std;

void printNum(int* numPtr) {
  cout << *numPtr << endl; 
}


void printChar(char* charPtr) {
  cout << *charPtr << endl; 
}


// generic void pointer function
void printVoid(void* ptr, char type) {
  switch(type) {
    case 'i': 
      cout << *((int*)ptr) << endl; // converts the void to an int since you cant print out a void pointer
      break;
    case 'c':
      cout << *((char*)ptr) << endl;
      break;
  }
};

int main() {

   // pointer holds an address
   // and must be defined as the same type as its value
   //
   // but there is an exception
   //
   // void pointers 
   //
   // void pointers are generic and hold any type
   // the draw back is you can't dereference a void pointer

  int num = 5;
  printNum(&num);


  char letter = 'a';
  printChar(&letter); 


  // using a function that does not require a type to be passed into it as a param
  printVoid(&num, 'i');
  printVoid(&letter, 'c');

  /** be careful when using void pointers **/ 


  return 0; 
}
