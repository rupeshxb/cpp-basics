#include<iostream>
using namespace std;
 
class Shape
{
  public:
    int length;
    int breadth;
    int height;
  
  public:
  Shape(){
    cout<<"This is constructor of shape";
  }
};

// public members of shape become the private members of cube
class Cuboid: public Shape{
    public:
        Cuboid(){
            cout<<"This is constructor of cube";
        }
};

// public members of cuboid are inherited as private members of cuboid
class Cube: private Cuboid{
    public:
        int vol = length*breadth*height;
};

int main(){
  
  return 0;
}