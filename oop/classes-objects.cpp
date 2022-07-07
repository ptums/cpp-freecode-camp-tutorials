
#include <iostream>
using namespace std;

// abstract class for our
// Employee class
class IEmployee {
  // we force any Employee who uses this abstract
  // to use this AskForPromotion function
  // are used to support Runtime Polymorphism.
  virtual void AskForPromotion() = 0;

};

class Employee:IEmployee {
  private:
    string Name;
    string Company;
    int Age;

  public:
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
    void IntroduceYourself() {
      cout << "Name - " << Name << endl;
      cout << "Company - " << Company << endl;
      cout << "Age - " << Age << endl;
      cout << endl;
    }

    // we use getters and setters to manage encapsulation and 
    // control how we modify our classes variables
    
    void setName(string name) {
      Name = name;
    }

    string getName() {
      return Name;
    }

    void setCompany(string company) {
      Company = company;
    }

    string getCompany() {
      return Company;
    }

    void setAge(int age) {
      Age = age;
    }
     
    int getAge() {
      return Age;
    }


    // abstraction is a way to hide complex processes
    // we are abstracting the AskForPromotion logic
    // into the abstract class IEmployee
    void AskForPromotion() {
      if(Age > 30)
        cout << Name << " got promoted!" << endl; 
      else
        cout << Name << " sorr no promotion for you!" << endl;
    }


};

int main()
{

  Employee employee1 = Employee("Peter", "Vault Innovation", 35);
  employee1.IntroduceYourself();
  
  Employee employee2 = Employee("Peter Jr.", "Home", 0);
// employee2.IntroduceYourself();
  employee2.setAge(4);
  cout << "New age: " << employee2.getAge() << endl;

  employee1.AskForPromotion();
  employee2.AskForPromotion();




  return 0;
}
