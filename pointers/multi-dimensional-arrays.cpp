#include <iostream>
using namespace std;

int main () 
{

  // multi-dimensional array
  int row, col;
  cout << "rows, cols";
  cint >> rows >> cols;
  
  int **table = new int*[rows];

  for(int i = 0; i < rows; i++)
  {
    table[i] = new int [cols];
  }

  // will store 88 in the row 1 and column 2
  table[1][2] = 88;

  // now we need to deallocate the memory
  // since we aren't using it anymore
  for(int i = 0; i < rows; i++)
  {
    delete[] table[i];
  }

  delete[] table;
  table = NULL;


  // once you allocate memory using pointers
  // you need to delete that memory too. DONT FORGET
  // https://youtu.be/kiUGf_Z08RQ?t=4257
  return 0;
}
