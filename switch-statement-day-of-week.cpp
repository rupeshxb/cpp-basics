#include<iostream>
using namespace std;

int main(){
	char day;
	cout << "Enter a letter for equivalent day (s,m,t,w,x,y,z)";
	cin >> day;
	switch(day){
		case 's':
			cout<<"Sunday";
			break;
		case 'm':
			cout<<"Monday";
			break;
		case 't':
			cout<<"Tuesday";
			break;
		case 'w':
			cout<<"Wednesday";
			break;
		case 'x':
			cout<<"Thursday";
			break;
		case 'y':
			cout<<"Friday";
			break;
		case 'z':
			cout<<"Saturday";
			break;
		default:
			cout<< "Wrong letter entered";
	}
	return 0;
}