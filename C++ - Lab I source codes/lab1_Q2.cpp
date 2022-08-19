/* 
2. Assign and print the roll number, phone number and address of two students
having names "Sam" and "John" respectively by creating two objects of the class 'Student'. 
*/ 

#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    string phone;
    string address;
};

int main(){
  Student student_1;
  Student student_2;
  student_1.name = "Sam";
  student_1.roll = 5;
  student_1.phone = "1414123123";
  student_1.address = "Baneswor";

  student_2.name = "John";
  student_2.roll = 6;
  student_2.phone = "1414156123";
  student_2.address = "Tinkune";

  cout<<"The details of "<<student_1.name<<" are: "<<endl;
  cout<<"Roll: "<<student_1.roll<<endl;
  cout<<"Phone: "<<student_1.phone<<endl;
  cout<<"Address: "<<student_1.address<<"\n \n";

  cout<<"The details of "<<student_1.name<<" are:"<<endl;
  cout<<"Roll: "<<student_2.roll<<endl;
  cout<<"Phone: "<<student_2.phone<<endl;
  cout<<"Address: "<<student_2.address<<endl;
  return 0;
}

