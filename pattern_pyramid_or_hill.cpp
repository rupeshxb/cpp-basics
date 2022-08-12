#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	n=4;
	for(i=1;i<=n;i++) // for number of rows
	{
		for(j=i;j<=n;j++) // decreasing triangle pattern with spaces
		{
			cout<<"  ";
		}
		for(j=1;j<=i;j++) // increasing triangle pattern with stars
		{
			cout<<"* ";
		}
		for(j=1;j<i;j++) // decreasing triangle pattern with stars with one less column than other triangles
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}