#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter first number:"<<endl;
	cin>>a;
	cout<<"Enter second number:"<<endl;
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"Two swapped numbers are: "<<a<<","<<b<<endl;
	return 0;
}