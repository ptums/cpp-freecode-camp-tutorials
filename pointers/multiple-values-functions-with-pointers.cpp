#include <iostream>
using namespace std;

int getMin(int nums[], int size) {
  int min =  nums[0];

  for(int i = 1; i <  size; i++) {
    if(nums[i] < min) {
      min = nums[i];
    }
  }
  return min;
}



int getMax(int nums[], int size) {
  int max =  nums[0];

  for(int i = 1; i <  size; i++) {
    if(nums[i] > max) {
      max = nums[i];
    }
  }
  return max;
}


// now we do this using pointers and referencing
// this is pretty wild!
void getMinAndMax(int numbers[], int size, int* max, int* min) 
{
  for(int i = 1; i < size; i++) {
    if(numbers[i] > *max) {
      *max = numbers[i];
    }

    if(numbers[i] < *min) {
      *min = numbers[i];
    }
  }

}
int main () 
{
  int nums[5] = { 5, 4, -2, 29, 6 };
  
  cout << "Min is " << getMin(nums, 5) << endl;
  cout << "Max is " << getMax(nums, 5) << endl;

  cout << endl;

  int min = nums[0];
  int max = nums[0];

  getMinAndMax(nums, 5, &max, &min);

  cout << "min: " << min << endl;
  cout << "max: " << max << endl;
   

  return 0;
}
