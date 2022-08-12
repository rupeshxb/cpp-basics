#include<iostream>
#include<iomanip> // setprecision()
using namespace std;

int main(){
	float x=2.12412412;
	cout<<"Setting precision without fixed:"<<setprecision(5)<<x;
	cout<<"Setting precision with fixed:"<<fixed<<setprecision(5)<<x;
	return 0;
}

// setprecision() is a manipulator that specifies the significant digits needed in a floating-point or double value.