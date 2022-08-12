/* 7. Write a program and input two integers in main and 
pass them to default constructor of the class. Show the result of the additon of two numbers. */ 

#include<iostream>
using namespace std;
 
class Add
{
  public:
  Add(int c, int d){
    cout<<"The sum of two numbers is: "<<c+d<<endl;
  }
};

int main(){
  int a,b;
  cout<<"Enter two numbers:"<<endl;
  cin>>a>>b;
  Add(a,b);
  return 0;
}