/* 
1. Create a class named 'Student' with a string variable 'name' 
and an integer variable 'roll_no'. Assign the value of roll_no as '2' 
and that of name as "John" by creating an object of the class Student. 
*/ 

#include<iostream>
using namespace std;
 
class Student
{
  public:
  string name;
  int roll_no; 
};

int main(){
  Student x1;
  x1.name = "John";
  x1.roll_no = 2;

  cout<<"Student "<<x1.name<<" and roll no: "<<x1.roll_no<<endl;
  return 0;
}