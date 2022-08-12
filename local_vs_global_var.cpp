#include<iostream>
using namespace std;

// Global variables

int a = 20;
int b = 30;

int add(){
	return a + b;
}

int mul(){
	//local variables
	int c = 10;
	int d = 15;
	return c*d;
}

int main(){
	//local variables
	a = 10;
	b = 5;
	
	cout<<"The sum is:"<<add()<<endl; 
	cout<<"The multiplication is:"<<mul()<<endl;
	return 0;
}