#include<iostream>
using namespace std;

class Car{
    public:
    Car(){
        cout<<"This is a BNW car."<<endl;
    }; // Default Constructor
};

int main(){
  Car();
  return 0;
}