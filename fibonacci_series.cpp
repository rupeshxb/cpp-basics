#include<iostream>
using namespace std;

int fibonacci(){
	int i,num,n1=0,n2=1,n3;
	cout<<"Enter a number:"<<endl;
	cin>>num;
	for(i=1;i<=num;i++){
		n3=n1+n2;
		cout<<n3<<endl;
	}
	return 0;
}

int main(){
	fibonacci();
	return 0;
}

//Try again ....output not correct