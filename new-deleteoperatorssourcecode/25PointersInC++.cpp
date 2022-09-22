#include<iostream>
using namespace std;

int main(){
    int a = 1;
    int* ptr1 = &a;

    float b = 9.1;
    float* ptr2 = &b;


    cout<<"The value of a is "<<*(ptr1)<<endl;
    cout<<"The value of b is "<<*(ptr2)<<endl;

  
    return 0;
}