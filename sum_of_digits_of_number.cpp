#include<iostream>
using namespace std;

int main(){
	int num, sum, quo, rem;
	cout<<"Take a number \n";
	cin>>num;
	sum=0;
	while(rem>0){
		rem = num%10;
		quo = num/10;
		num = quo;
		sum = sum + rem;
	}
	cout<<sum;
	return 0;
}