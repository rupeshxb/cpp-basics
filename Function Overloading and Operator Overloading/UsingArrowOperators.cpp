#include <iostream>
using namespace std;

class Student {
  private:
    int age;

  public:

    // constructor initializes age to 12
    Student() : age(12) {}

    void getAge() {
      cout << "Age = " << age << endl;
    }
};
// The -> is called the arrow operator. It is formed by using the minus sign followed by a greater than sign.

// Simply saying: To access members of a structure, use the dot operator. To access members of a structure through a pointer, use the arrow operator.
// or
// the arrow operator ->. This operator is used to access class members using pointers.

int main() {

  // dynamically declare Student object
  Student* ptr = new Student();

  // call getAge() function
  ptr->getAge();

  // ptr memory is released
  delete ptr;

  return 0;
}
