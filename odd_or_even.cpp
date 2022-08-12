#include<iostream>
using namespace std;

int main(){
	int num, rem;
	cout<<"Enter a number:"<<endl;
	cin>>num;
	rem = num%2;
	
	if(rem==0){
		cout<<"The number is even."<<endl;
	}
	else if(rem==1){
		cout<<"The number is odd."<<endl;
	}
	
	return 0;
}