#include<iostream>
using namespace std;

class Area{
    public:
    int len, bre, area;

    // Function to store the dimensions (length and breadth) of rectangle
    void setDim(){
        cout<<"Enter the length and breadth of the rectangle. \n";
        cin>>len>>bre;
        return;
    }

    // Function to display the area of rectangle
    void getArea(){
        area = len * bre ;
        cout<<"The area of rectangle is:"<<area<<endl;
        return;
    }
};

int main(){
  Area x1;
  x1.setDim();
  x1.getArea();
  return 0;
}