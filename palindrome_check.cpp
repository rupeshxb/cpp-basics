#include<iostream>
using namespace std;

int main()
{
	int num, originalNum, rev_num=0, rem, quo;
	cout<<"Enter the number to be checked. \n";
	cin>>num;
	originalNum = num;
	while(num>0)
	{
		rem = num%10;
		rev_num = rev_num*10+rem;
		quo = num/10;
		num = quo;
	}
	cout<<"The reverse of "<<originalNum<<" is: "<<rev_num<<endl;
	if(originalNum==rev_num)
	{
		cout<<"The entered number is palindrome. \n";
	}
	else{
		cout<<"The entered number is not palindrome. \n";
	}
	return 0;
}