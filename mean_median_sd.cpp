#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int x;
	cout<<"Enter the number of elements"<<endl;
	cin>>x;
	int arr[x];
	int i,sum=0,mean;
	
	
	for(i=0;i=x;i++){
		sum = sum+arr[x];
	}
	mean = sum / x;
	cout<<sum;
	cout<<"The mean of the given data is:"<<mean;	
	return 0;
}