#include<iostream>
using namespace std;

int main(){
	int n,i,total=0;
	cout<<"How many elements do you want in array? \n";
	cin>>i;
	
	int num[i]; 
	// array was declared here to avoid segmentation fault (segfault) since i needs to be defined beforehand
	
	cout<<"Enter "<<i<<" elements of array. \n";
	for(n=0;n<i;n++)
	{
		cin>>num[i];
		total+=num[i];
	}
	cout<<"Total is:"<<total<<"\n";
	float avg=(float)total/i;
	cout<<"Average is:"<<avg<<"\n";
	cout<<endl;
	return 0;
}
	   