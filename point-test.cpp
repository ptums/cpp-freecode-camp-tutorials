#include <iostream>
using namespace std;

int main ()
{
  int a = 10;
  int *p;
  p = &a;

  cout << "p address: " << p << endl;
  cout << "p size: " << sizeof(p) << endl;
  cout << "int size: " << sizeof(int) << endl;
  cout << "p+1 address: " << p+1 << endl;
  cout << "p+2 address: " << p+2 << endl;
  cout << "value of address of p+1: " << *p+1 << endl;
  return 0;
}
