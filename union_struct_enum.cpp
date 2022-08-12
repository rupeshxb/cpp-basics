#include<iostream>
using namespace std;

int main(){
	union un_1{
		char x[50];
		string abc;
		int y;
	};
	struct strt_1{
		string x; // when string is kept here struct has a size shown by divisible by 8
		int y;
	};
	struct strt_2{
		char z[32]; // when char[] is kept here struct has a size shown by divisible by 4
		int y;
	};
	enum day{
		sunday,monday,tuesday,wednesday,thursday,friday,satuday
	};
	strt_1 n1;
	std::cout<<"The size of string: "<<sizeof(n1.x)<<endl;
	cout<<"The size of a union: "<<sizeof(un_1)<<endl;
	cout<<"The size of struct with a string data type in it: "<<sizeof(strt_1)<<endl;
	cout<<"The size of struct with an array of char[]: "<<sizeof(strt_2)<<endl;
	cout<<"The size of enum: "<<sizeof(day)<<endl;
	
	day x1;
	cout<<day::monday; // cout<<monday also works
	return 0;
}