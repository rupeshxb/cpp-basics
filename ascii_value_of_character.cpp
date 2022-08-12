#include<iostream>
using namespace std;

int main(){
	char ent_char;
	cout<<"Enter a character: \n";
	cin>>ent_char;
	cout<<"The ASCII value of character "<<ent_char<<" is: "<<int(ent_char); // int() returns the numeric value of a given character
	return 0;
}