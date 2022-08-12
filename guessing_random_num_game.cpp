#include<iostream>
#include<cstdlib> //carries srand(),rand()
#include<ctime> // caries time()
using namespace std;

int gen_ran(); //prototype

int main(){
	int iSecret, iGuess, count=0;
	
	srand(time(NULL)); //initializing random seed
	
	iSecret = rand()%10 + 1; //Generate random number
	
	do{
		cout<<"Guess the number 1 to 10:"<<endl;
		cin>>iGuess;
		if(iGuess<iSecret){
			cout<<"The number is greater than guessed number"<<endl;
		}
		else if(iGuess>iSecret){
			cout<<"The number is smaller than guessed number"<<endl;
		}
		count = count + 1;
	}while(iGuess!=iSecret);
	cout<<"Total guesses made:"<<count<<endl;
	cout<<"Congratulations!";
}