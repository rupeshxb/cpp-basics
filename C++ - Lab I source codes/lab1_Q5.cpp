/* 
5. Write a program to print the area of a rectangle by creating a class named 'Area'
having two functions. First function named as 'setDim' takes the length and breadth
of the rectangle as parameters and the second function named as 'getArea'
returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard. 
*/

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