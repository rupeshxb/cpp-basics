#include<iostream>
using namespace std;

int main(){
	int n,i,j,,total=0;
	cout<<"How many elements do you want in array? \n";
	cin>>i;
	j=i-1;
	
	int num[j]; 
	// array was declared here to avoid segmentation fault (segfault) since j needs to be defined beforehand
	
	cout<<"Enter "<<i<<" elements of array. \n";
	for(n=0;n<=j;n++)
	{
		cin>>num[j];
		total+=num[j];
	}
	cout<<"Total is:"<<total<<"\n";
	float avg=(float)total/i;
	cout<<"Average is:"<<avg<<"\n";
	cout<<endl;
	return 0;
}
	   