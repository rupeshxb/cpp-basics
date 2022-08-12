#include<iostream>
using namespace std;

void sum(int &a, int &b){ //Pass by reference
	int add;
	add=a+b;
	cout<<add<<endl;
	return;
}

int main(){
	int x, y=2, z=3;
	sum(y,z);
	return 0;        
}