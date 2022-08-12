#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout << "Enter two number \n";
	cin >> a; 
	cin >> b;
	cout << "The sum is:" << a+b;
	cout << "The product is:" << a*b;
	cout << "The difference is:" << a-b;
	cout << "The division is:" << a/b;
	cout << "The mod or remainder is:" << a%b;
	return 0;
}