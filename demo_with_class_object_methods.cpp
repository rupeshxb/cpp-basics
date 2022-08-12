#include<iostream>
using namespace std;

class MyClass{
	public:
	void myMethod(); // This is a method prototype
};

// Accessing method outside of class using scope resolution operator
void MyClass::myMethod(){
	cout<<"Hello World"<<endl;
}

int main(){
	MyClass MyObj;
	MyObj.myMethod();
	return 0;
}