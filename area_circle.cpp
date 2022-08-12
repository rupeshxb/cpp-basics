#include<iostream>
#include<math.h>
using namespace std;

int main(){
	const float pi = 3.1415;
	float area_circle;
	int r;
	cout<<"Enter radius:";
	cin>>r;
	area_circle = pi*pow(r,2);
	cout<< "Area of circle is:"<<area_circle<<endl;
	return 0;
}