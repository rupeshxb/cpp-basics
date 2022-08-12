#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter three numbers:"<<endl;
	cin>>a>>b>>c;
	
//	nested ifs
	if(a>=b){
		if(a>=c){ 
			cout<<a<<" is the greatest"<<endl;
		}
	}
	if(b>=c){
		if(b>=a){
			cout<<b<<" is the greatest"<<endl;
		}
	}
	else{
		cout<<c<<" is the greatest"<<endl;
	}
	return 0;
}