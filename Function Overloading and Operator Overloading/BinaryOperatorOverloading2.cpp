// C++ program to overload the binary operator +
// This program adds two complex numbers

#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    // Constructor to initialize real and imag to 0
    Complex()
    {
        real = 0;
        imag = 0;
    }

    void input()
    {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    // Overload the + operator
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        //here, real corresponds to data member of complex1 and obj1.real corresponds to data members of complex2
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output()
    {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main()
{
    Complex complex1, complex2, complex3, result;

    cout << "Enter first complex number:\n";
    complex1.input();

    cout << "Enter second complex number:\n";
    complex2.input();

    // cout << "Enter third complex number:\n";
    // complex3.input();

    // complex1 calls the operator function
    // complex2 is passed as an argument to the function
    result = complex1 + complex2 ;
    //this is acting as complex1.add(complex2)
    //so, result = complex1.add(complex2)
    result.output();

    return 0;
}