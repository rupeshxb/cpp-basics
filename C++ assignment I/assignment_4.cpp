#include<iostream>
#include<math.h>
using namespace std;

class Triangle{
  public:
  int length;
  int breadth;
  int height;
  int s;
  float area;
  float perimeter;

  // Parameterized constructor that takes dimensions of triangle as parameters
  Triangle(int length, int breadth, int height){
      this->length = length;
      this->breadth = breadth;
      this->height = height;
      perimeter = length + breadth + height;
      s = perimeter / 2;
      area = sqrt(s*(s-length)*(s-breadth)*(s-height));
      cout<<"The perimeter of triangle is:"<<perimeter<<endl;
      cout<<"The area of triangle is:"<<area;
  }
};

int main(){
  Triangle(3,4,5); // Same as Triangle x1(3,4,5);
  return 0;
}