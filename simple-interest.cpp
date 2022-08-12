#include<iostream>
using namespace std;

int main(){
	int p,t,r,i;
	cout << "Enter principle" << endl;
	cin >> p;
	cout << "Enter time" << endl;
	cin >> t;
	cout << "Enter rate" << endl;
	cin >> r;
	i = p*t*r/100;
	cout << "The interest is:" << i;
	return 0;
}