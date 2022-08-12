#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}

//Driver code

int main(){
	int a = 5, b = 10;
	cout<<"Before swap: \n";
	cout<<a << "," << b << endl;
	swap(&a,&b); 
	cout<<"After swap: \n";
	cout<<a<< "," << b << endl;
	return 0;
}