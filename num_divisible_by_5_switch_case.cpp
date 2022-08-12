#include<iostream>
using namespace std;

int main(){
	int num, rem;
	cout<<"Enter a number: \n";
	cin>>num;
	rem = num % 5;
	switch(rem)
	{
		case 0:
			cout<<"The number is divisible by 5."<<endl;
			break;
		default:
			cout<<"The number is not divisible by 5."<<endl;
			break;
	}
	return 0;
}