#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char src[]="This is source string";
	char dest[]="This is destination string";
	
//	char src[40]{"This is source string"};
//	char dest[40]{"This is destination string"};
	
	strcpy(dest, src);
	
//	strcpy(char* dest, const char* src);
	
	cout<<dest<<endl;
	return EXIT_SUCCESS;
}

