#include<iostream>
using namespace std;

class MyClass{
	public:
	int sum;
	void myMethod(int, int); // This is a method prototype
};

// Accessing method outside of class using scope resolution operator
void MyClass::myMethod(int a,int b){
	sum = a+b;
	cout<<"The sum is:"<<sum;
}

int main(){
	MyClass sachin;
	sachin.myMethod(5,6);
//	MyClass rupesh;
//	rupesh.myMethod(2,3);
	return 0;
}