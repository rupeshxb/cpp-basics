#include<iostream>
using namespace std;

int main(){
	int n, j;
	cout<<"Enter the number of elements in array: \n";
	cin>>n;
	j = n - 1;
	int arr[j];
	
	
// Storing the elements of array
	cout<<"Enter the elements: \n";
	for(j=0;j<n;j++)
	{
		cin>>arr[j];
	}
	
//Finding the largest elements in array
	for(j=0;j<n;j++)
	{
		if(arr[0]<arr[j])
		{
			arr[0]=arr[j];
		}
	}	
	cout<<"The greatest element in the array is: \n"<<arr[0];
}