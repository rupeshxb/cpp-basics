#include<iostream>
using namespace std;

class A{
    // private by default
    int x=4;
    int y=5;
    public:
        int mul()
        {
            int z=x*y;
        }
};

class B: private A{
    public:
    void display(){
        int result = mul();
        cout<<"Multiplication of x and y is:"<<result<<endl;
    }
};

int main(){
    B b1;
    b1.display();
    return 0;
}

