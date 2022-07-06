
#include <iostream>
using namespace std;

class Employee {
  public:
    string Name;
    string Company;
    int Age;
  // access modifiers - private, public, and protect
  // private -  can only be found in the class
  // public - exposed out side of the class. This is the default
  // protect - somewhere in between and has dynamic rules
  //

  // There are three rules to constructors
  // - They don't have a return type
  // - Has the same name as the class 
  // - Constructors must be public (not always, but more often than not)
  
    Employee(string name, string company, int age) {
      Name = name;
      Company = company;
      Age = age;

    }
  void IntroduceYourself() 
  {
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
    cout << endl;

  }
};

int main()
{

  Employee employee1 = Employee("Peter", "Vault Innovation", 35);
  employee1.IntroduceYourself();


  
  Employee employee2 = Employee("Peter Jr.", "Home", 0);
  employee2.IntroduceYourself();


  return 0;
}
