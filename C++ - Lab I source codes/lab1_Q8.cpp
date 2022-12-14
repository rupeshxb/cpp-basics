/* 8. Write a c++ class called 'student' with Data members:
name(char type), marksl, marks2 (integer type).
The program asks the user to enter name and marks.
Then calc_media() calculates the media note
and disp() display name and total media mark on screen
in different lines.
*/

#include <iostream>
using namespace std;

class Student
{
public:
  char name[30];
  int marks1, marks2;
  int total; // introducing a new variable to store total

  void calc_media()
  {
    cout << "Enter the name:" << endl;
    cin >> name;
    cout << "Enter marks of two subjects:" << endl;
    cin >> marks1 >> marks2;
    total=marks1+marks2;
  }

  void disp_media()
  {
    cout <<name<<endl;
    cout<< "Total marks:" << total << endl;
  }
};

int main()
{
  Student myObj;
  myObj.calc_media();
  myObj.disp_media();
  return 0;
}