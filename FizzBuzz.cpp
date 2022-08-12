/* Fizz buzz = for multiple of 3 print fizz, for multiple of 5 print buzz, 
for multiple of both 3 and 5 print fizz buzz, and for the rest print the number*/

#include<iostream>
using namespace std;

int main(){
	int i;
	
	for(i=1;i<=100;i++){
		if(i%3==0 && i%5==0)
		{
			cout<<"FizzBuzz"<<endl;
		}
		else if(i%3==0)
		{
			cout<<"Fizz"<<endl;
		}
		else if(i%5==0)
		{
			cout<<"Buzz"<<endl;
		}
		else
		{
			cout<<i<<endl;
		}
	}
}