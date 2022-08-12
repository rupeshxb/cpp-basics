#include<iostream>
using namespace std;

int main(){
	float p,t,r;
	float i;
	cout<<"Enter principle, time and rate: \n";
	cin>>p>>t>>r;
	i = p*t*r/100;
	cout<<"The simple interest is:"<<i;
	return 0;
}