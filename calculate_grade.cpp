#include<iostream>
using namespace std;

void calc_grade(){
	cout<<"There are 5 subjects: \n \n";
	int perc,i,marks, total=0;
	for(i=0;i<5;i++){
		cout<<"Enter the number: \n";
		cin>>marks;
		total+=marks;  //		total= total + marks;
	}
	
	perc=total/5;
	cout<<"total marks is:"<<total;
	cout<<"The percentage is: "<<perc<<"%"<<endl;
	
	if(perc>0 && perc<40){
		cout<<"Failed! \n";
	}
	else if(perc>=40 && perc<60){
		cout<<"Grade is B \n";
	}
	else if(perc>=60 && perc<80){
		cout<<"Grade is A \n";
	}
	else if(perc>=80 && perc<=100){
		cout<<"Grade is A+ \n";
	}
	
}

int main(){
	calc_grade();
	return 0;
}