#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll_no;
};
int main(){
  Student obj_1;
  obj_1.name = "John";
  obj_1.roll_no = 02;
  cout<<"The name is: "<<obj_1.name<<endl;
  cout<<"The roll no. is: "<<obj_1.roll_no<<endl;
  return 0;
}