/*
A friend function is a function that is specified outside a class but has the ability to access the
class members protected and private data. A friend can be a member’s function, function
template, or function, or a class or class template, in which case the entire class and all of its
members are friends. Explain with example how this is achieved in C++.
*/

#include <iostream>
using namespace std;
class Box
{
private:
    int length;

public:
    friend int printLength(Box); // friend function
};
int printLength(int b)
{
    cout<<"The length of box is:"<<b;
}
int main()
{
    int b;
    cout<<"Enter the length of box:"<<endl;
    cin>>b;
    printLength(b);
    return 0;
}