#include<iostream>
using namespace std;

void area_rect();

int main(){
	area_rect();
	return 0;
}

void area_rect(){
	int area,l,b;
	cout<<"Enter length and breadth of rectangle: \n";
	cin>>l>>b;
	area = l*b;
	cout<<"area of rect is: \n"<<area;
}
	