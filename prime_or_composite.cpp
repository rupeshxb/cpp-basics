#include<iostream>
using namespace std;

int main(){
	int num,i;
	cout<<"Enter a number: \n";
	cin>>num;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			cout<<num<<" is composite. \n";
			break;
		}
		else{
			cout<<num<<" is prime. \n";
			break;
		}
		/* break; statements are necessary here to break out of the conditional statements if or else. 
		If break; is not used 'cout' can occur multiple times */
	}
}