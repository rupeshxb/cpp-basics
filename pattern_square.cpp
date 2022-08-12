#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter the number of rows: \n";
	cin>>n;
	for(i=1;i<=n;i++) /* rows */
	{
		for(j=1;j<=n;j++) /* column */
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}