#include<iostream>
using namespace std;

int main(){
	int a,b,z;
	cout << "Enter two numbers" << endl;
	cin >> a >> b;
	z = a;
	a = b;
	b = z;
	cout << "The swapped numbers are" << a << "and" << b;
	return 0;
}