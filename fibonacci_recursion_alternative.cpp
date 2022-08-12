#include<iostream>
using namespace std;

int fibn(int);

int main(){
	int x;
	cout<<"enter number"<<endl;
	cin>>x;
	fibn(x);
	return 0;
}

int fibn(int x){
//	int total_fib;
	if(x==0 || x==1){
		cout<<x;
	}
	else{
//		total_fib = fib(x-1) + fib(x-2);
		cout<< (fibn(x-1) + fibn(x-2));
	}
	return 0;
}