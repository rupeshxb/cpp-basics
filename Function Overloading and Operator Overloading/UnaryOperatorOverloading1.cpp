// Overload ++ when used as prefix

#include <iostream>
using namespace std;

class Count
{
private:
    int value;

public:
    // Constructor to initialize count to 5
    // Count() : value(5) {}
    Count()
    {
        value = 0;
    }

    Count(int x)
    {
        value = x;
    }

    // Overload ++ when used as prefix
    void operator++()
    {
        ++value;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{

    // int x = 0;
    // ++x;
    // x++;
    // cout << x;

    // Count count1;
    // count1++;

    Count count1;
    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}