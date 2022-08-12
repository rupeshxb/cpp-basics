#include<iostream>
using namespace std;

int factorial(int n); //Prototype

int main(){
	int n;
	cout<<"Enter a number";
	cin>>n;
	cout<<factorial(n); //Calling a function factorial(n) that has argument with value n
	return 0;
}

int factorial(int n){ //fuction with parameters
	if(n>1){
		return n*factorial(n-1);
	}
	else{
		return 1;
	}
}