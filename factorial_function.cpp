#include<iostream>
using namespace std;

int factorial(){
	int i,n;
	int fact = 1;
	cout<<"Enter a number \n";
	cin>>n;
	for(i=n;i>=1;i--){
		fact = fact*i;
	}
	return fact;
}

int main(){
	cout<<factorial();
}
