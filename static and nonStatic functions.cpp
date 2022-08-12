#include<iostream>
using namespace std;

void staticFunc(){
	static int x=0;
	x--;
	cout<<x<<endl;
	return;
}

void nonStaticFunc(){
	int x=0;
	x++;
	cout<<x<<endl;
	return;
}

int main(){
	cout<<"This is static function called once \n";
	staticFunc();
	cout<<"This is static function called twice \n";
	staticFunc();
	cout<<"This is non static function called once \n";
	nonStaticFunc();
	cout<<"This is non static function called twice \n";
	nonStaticFunc();
}