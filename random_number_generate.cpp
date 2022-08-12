#include<iostream>
#include<cstdlib> //carries srand(),rand()
#include<ctime> // caries time()
using namespace std;

int gen_ran(); //prototype

int main(){
	
	gen_ran();
	return 0;
}

int gen_ran(){
	srand(time(NULL)); //initializing random seed
	int ran_num;
	int x=10,y=10;
	cout<<"Enter starting number:"<<endl;
	cin>>y;
	cout<<"Enter the range of random numbers"<<endl;
	cin>>x;
	ran_num = rand()% x + y;
	cout<<"Random number is:"<<ran_num;
	return 0;
}