/* 
6. Write a class having two private variables and one member function which will
return the area of the rectangle. 
*/

#include<iostream>
using namespace std;
 
class MyClass
{
  private:
  int length;
  int breadth;

  public:
  int areaRectangle(int length, int breadth){
    return length*breadth;
  }
};

int main(){
  MyClass obj_1;
  cout<<"The area of rectangle is:"<<obj_1.areaRectangle(3,4);
  return 0;
}