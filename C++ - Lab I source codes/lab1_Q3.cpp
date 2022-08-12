/*
3. Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5
units by creating a class named Triangle' with a function to print the area and perimeter. 
*/ 

#include<iostream>
#include<math.h> 
using namespace std;

class Triangle{
    public:
    float perimeter;
    float area;
    float s;

    /* Function to calculate and display perimeter using pass by reference*/
    void showPeri(int &a, int &b, int &c){
        perimeter = a+b+c;
        cout<<"The perimeter of triangle is:"<<perimeter<<endl;
        return;
    }

    /* Function to calculate and display area using pass by value*/
    void showArea(int a, int b, int c){
        s = perimeter/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"The area of triangle is:"<<area;
        return;
    }
};

int main(){
  Triangle x1; //x1 is a an object
  int a=3,b=4,c=5;
  x1.showPeri(a,b,c); // pass by reference
  x1.showArea(3,4,5); // pass by value
  return 0;
}