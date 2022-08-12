#include<iostream>
using namespace std;

int main(){
	int num, rev=0, quo, rem;
	cout<<"Enter the number: \n";
	cin>>num;
	while(num>10){
		quo = num/10;
		rem = num%10;
		num = quo;
		rev = rev + rem * 10;
	}
	cout<<"The reverse is:"<<rev;
}