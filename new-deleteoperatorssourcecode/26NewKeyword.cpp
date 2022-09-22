#include<iostream>
using namespace std;

int main(){
    int *a = new int(2);
    delete a;
    cout << "The value at address a is " << *a << endl;

    // float *b = new float(2.22);
    // cout << "The value at address p is " << *b << endl;

    int *arr = new int[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;
    cout << "The value of arr[4] is " << arr[4] << endl;
    
    return 0;
}