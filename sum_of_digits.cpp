#include<iostream>
using namespace std;

int main(){
	int quo, rem, i, digit, sum = 0;
	cout<<"Enter the digit. \n";
	cin>>digit;
	rem = digit%10;
	while(rem>0){
		rem = digit % 10;
		quo = digit/10;
		digit = quo;
		sum += rem;
	}
	cout<<sum;
	return 0;
}