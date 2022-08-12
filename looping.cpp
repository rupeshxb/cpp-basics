#include<iostream>
using namespace std;

int main(){
	char response;
	while(response !='y' && response != 'Y')
	{
		cout<<"You are not a good person"<< endl;
		cin >> response;	
	}
	cout<<"Have a nice day!"<<endl;
}