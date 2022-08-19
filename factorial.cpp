#include<iostream>
using namespace std;

int main(){
	int i,n;
	int fact = 1;
	cout<<"Give a number \n";
	cin>>n;
	for(i=n;i>=1;i--){
		fact = fact*i;
	}
	cout<<fact<<endl;
	return 0;
}

