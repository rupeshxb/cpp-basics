#include<iostream>
using namespace std;

int main(){
	int num,rem;
	cout<<"Enter a number: \n";
	cin>>num;
	rem = num %5;
	if(rem==0){
		cout<<"The number is divisible by 5";
	}
	else{
		cout<<"The number is not divisible by 5";
	}
	return 0;
}