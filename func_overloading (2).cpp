#include<iostream>
using namespace std;

void add(int,int,int); //prototype
void add(int, int); //prototype

int main(){
	add(1, 2);
	return 0;
}


void add(int a, int b, int c){
	int sum;
//	cout<<"Enter any three number"<<endl;
//	cin>>a>>b>>c;
	sum = a+b+c;
	cout<<sum<<endl;
}


void add(int a, int b){
	int sum;
//	cout<<"Enter any two number:"<<endl;
//	cin>>a>>b;
	sum = a + b;
	cout<< sum<<endl;
}



