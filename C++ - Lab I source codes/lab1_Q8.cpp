/* 8. Write a c++ class called 'student' with Data members:
name(char type), marksl, marks2 (integer type). The program asks the user to enter name and marks.
Then calc_media() calculates the media note and disp() display name and total media mark on screen
in different lines.  
*/

#include<iostream>
using namespace std;
 
class Student
{
  public:
  char name;
  int marks1, marks2;
  void calc_media(){
    
  }
};

int main(){
  cout<<"Enter name and marks:"<<endl;
  Student myObj;
  
  return 0;
}