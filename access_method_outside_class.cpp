// Program that shows accessing a method that is defined outside a class.

#include<iostream>
using namespace std;

class MyClass{
	public:
	int a,b,sum;
	void myMethod(int, int); // This is a method prototype, must be declared inside a class
};

// Accessing method outside of class using scope resolution operator
void MyClass::myMethod(int a,int b){
	sum = a+b;
	cout<<"The sum is:"<<sum;
}

int main(){
	MyClass x1;
	x1.myMethod(5,6);
	return 0;
}