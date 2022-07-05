#include <iostream>
#include <memory>
using namespace std;

class MyClass {
  public:
    MyClass() {
      cout << "Constructor invoked" << endl;
    }
    ~MyClass(){
      cout << "Destructor invoked" << endl;
    }
};

int main () {
  // smart pointers - container for a raw pointer
  // the pro is they deallocate memory automatically
  // three types of smart pointers
  // 1. unique, 2. shared, 3. weak
 
  // unique pointer example
  unique_ptr<MyClass>unPtr1 = make_unique<MyClass>();

  // shared pointer example
  // will keep element in memory
  shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
  cout << "Shared count: " << shPtr1.use_count() << endl;


  shared_ptr<MyClass>shPtr2 = shPtr1;
  cout << "Shared count: " << shPtr1.use_count() << endl;
  

  // weak pointer example
  // wont keep element in memory
  weak_ptr<int> wePtr1;
  {
     shared_ptr<int>shPtr1 = make_shared<int>(25);
     wePtr1 = shPtr1;
  }

  return 0;
}
