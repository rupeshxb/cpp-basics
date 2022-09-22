#include<iostream>
using namespace std;

class BaseClass{
    public: 
    void print(){
        cout<<"Printed from base class. \n";
    }
};

class DerivedClass: public BaseClass{
    public: 
    void print(){
        cout<<"Printed from derived class. \n";
    }
};

int main(){
    DerivedClass d1;
    BaseClass* ptr; // pointer ptr that has data type of class i.e base class
    ptr->print(); // access print() of base class through the pointer variable ptr
    d1.print(); // call print() of derived class
    return 0;
}