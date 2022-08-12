#include<iostream>
using namespace std;

int main(){
	int i = 34;
	int* ptr = &i;
	cout<<"Value of *ptr is:"<<*ptr<<endl; // prints value of i using dereferencing
	cout<<"Value of ptr is:"<<ptr<<endl; // prints value of address of i
	return 0;
}