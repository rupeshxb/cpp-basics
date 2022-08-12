#include<iostream>
using namespace std;

int main()
{
	int data[100],i,j,n,temp;
	cout<<"No of data: \n";
	cin>>n;
	cout<<"Enter elements of data: \n";
	
	for(i=0;i<n;i++)
	{
		cin>>data[i];
	}
	
//	This loop sorts in ascending order
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(data[i]>data[j])
			{
				temp = data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
	}
	
	
	int sort_data[n];
	cout<<"The data sorted in ascending order is:"<<endl;
	for(i=0;i<n;i++)
	{
		sort_data[i]=data[i];
		cout<<sort_data[i]<<endl;
	}
	
	return 0;
}