#include<iostream>
#include<math.h>
using namespace std;

void square(int base){
	int x;
	x = pow(base,2);
	cout<<"The square of number is:"<<x;
}

int main(){
	int num;
	cout<< "Enter the number or base"<<endl;
	cin>>num;
	square(num);
	return 0;
}