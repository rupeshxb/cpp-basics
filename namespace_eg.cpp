#include<iostream>
using namespace std;

namespace n1{
	void func_1(){
		int x,y,sum;
		cout<<"Enter two number"<<endl;
		cin>>x>>y;
		sum = x+y;
		cout<<sum<<endl;
		return;
	}
}

namespace n2{
	void func_1(int x, int y){
		int diff;
		diff = x-y;
		cout<<diff<<endl;
		return;
	}
}

int main(){
	n1::func_1();
	n2::func_1(10,5);
	return 0;
}