#include<iostream>
using namespace std;

int leap_year();

int main(){
	leap_year();
	return 0;
}

int leap_year(){
	int year;
	cout<<"Enter the year to check if it's a leap year:"<<endl;
	cin>>year;
	
	if(year%4==0){
		if(year%100=0 && year%400!=0){
			cout<<"The entered year is not a leap year."<<endl;
		}
		else{
			cout<<"The entered year is a leap year"<<endl;
		}
	}
	else{
		cout<<"The entered year is not a leap year."<<endl;
	}
	
	return 0;
}