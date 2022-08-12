#include<iostream>
using namespace std;

int fact_find(int x);

int main(){
	int a;
	cout<<"Enter an integer above 0. \n";
	cin>>a;
	cout<<fact_find(a);
}

int fact_find(int x)
{
	if(x==1)
	{
		return 1;
	}
	else
	{
		return x*fact_find(x-1);
	}
}