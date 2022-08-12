#include<iostream>
using namespace std;

void sum(int a, int b){ //Pass by value
	int add;
	add=a+b;
	cout<<add<<endl;
//	return 0;
}

int main(){
	int x, a=2, b=3;
	sum(7,6); //Output is 7+6
	cout<<a+b; //output is 2+3
	return 0;
}