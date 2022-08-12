#include<iostream>
using namespace std;

int main(){
	int n,i,j,num[i-1],total=0;
	cout<<"How many elements do you want in array? \n";
	cin>>i;
	cout<<"Enter "<<i<<" elements of array. \n";
	for(n=0;n<i;n++)
	{
		cin>>num[i-1];
		total+=num[i-1];
	}
	cout<<"Total is:"<<total<<"\n";
	float avg=(float)total/i;
	cout<<"Average is:"<<avg<<"\n";
	cout<<endl;
	return 0;
}
	   