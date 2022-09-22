#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal eats." << endl;
    }
};

class Dog : public Animal
{
public:
    void eat()
    {
        cout << "Dog eats." << endl;
    }
};

int main()
{
    Dog obj1;

    // calls from derived class i.e. Dog. Here, function overloading is working
    obj1.eat();

    // calls from base class i.e. Animal. Using scope resolution operator.
    obj1.Animal::eat();

    return 0;
}