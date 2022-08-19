#include<iostream>
#include<cstdlib> // srand(),rand()
#include<ctime> // time()
using namespace std;

int gen_ran(); //prototype

int main(){
	gen_ran();
	return 0;
}

int gen_ran(){
	srand(time(NULL)); 
	//initializing random seed. if this is not done, rand() will always generate the same number
	//time(NULL) returns seconds elapsed since 00:00:00 Jan 1, 1970 (UNIX epoch)
	int ran_num;
	int x,y;
	cout<<"UNIX epoch time is: "<<time(NULL)<<endl;
	cout<<"Enter starting number of the range:"<<endl;
	cin>>x;
	cout<<"Enter the total numbers in the range"<<endl;
	cin>>y;
	ran_num = rand()% y + x; // Generate any random number between x and (x+y), including x and (x+y)
	cout<<"Random number between "<<y<<" and "<<x<<" is: "<<ran_num;
	
	return 0;
}