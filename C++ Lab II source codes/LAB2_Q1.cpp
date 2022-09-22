/* Make a class named Fruit with a data member to calculate the number of fruits in a basket.
 Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket.
Print the number of fruits of each type and the total number of fruits in the basket. */

#include <iostream>
using namespace std;

class Apples
{
public:
    int no_apples;
    Apples()
    {
        cout << "Count and enter the no. of apples:" << endl;
        cin >> no_apples;
        cout<< "The number of apples are:"<<no_apples<<endl;
    }
};

class Mangoes
{
public:
    int no_mangoes;
    Mangoes()
    {
        cout << "Count and enter the no. of mangoes:" << endl;
        cin >> no_mangoes;
        cout<<"The number of mangoes are:"<<no_mangoes<<endl;
    }
};

// Fruit inherits from two classes Apples and Mangoes
// Also here the constructors Apples() and Mangoes() are made member functions of class Fruit.
class Fruit : public Apples, Mangoes
{
public:
    // Apples() and Mangoes() are already here as member functions but not visible.
    int total_fruits = no_apples + no_mangoes;
    Fruit()
    {
        cout << "Total no of fruits are:" << total_fruits<<endl;
    }
};

int main()
{
    Fruit();
    return 0;
}