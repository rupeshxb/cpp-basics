#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }

    void input()
    {
        cout << "Input real part" << endl;
        cin >> real;
        cout << "Input imaginary part:" << endl;
        cin >> img;
    }

    // Overloading the + operator
    Complex operator+(Complex ojb)
    {
        complex1.real = real + obj.real;
    }
};

int main()
{
    Complex complex1, complex2, result;
    return 0;
}