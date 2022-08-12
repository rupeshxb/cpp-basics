#include<iostream>
#include<math.h>
using namespace std;

int main(){
	const float pi=3.1415;
	float r, area;
	cout << "Enter radius";
	cin >> r;
	area = pi*pow(r,2);
	cout << "The area of the circle is:" << area;
	return 0;
}