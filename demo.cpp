#include<iostream>
using namespace std;

//void staticFunc(){
//	static int x=0;
//	x--;
//	cout<<x<<endl;
//	return;
//}
//
//void nonStaticFunc(){
//	int x=0;
//	x++;
//	cout<<x<<endl;
//	return;
//}

int main(){
	int num, divisor, quo, rem;
	cout<<"Enter the dividend and divisor \n";
	cin>>num>>divisor;
	quo = num/divisor;
	rem = num%divisor;
	cout<<"Quotient is:"<<quo<<endl;
	cout<<"Remainder is:"<<rem<<endl;
	return 0;
}