
// The above example works only when ++ is used as a prefix. To make ++ work as a postfix we use this syntax.
// void operator ++ (int) {
//     // code
// }
// Notice the int inside the parentheses. It's the syntax used for using unary operators as postfix; it's not a function parameter.



// Overload ++ when used as prefix and postfix
#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5) {}


    // Overload ++ when used as prefix
    void operator ++ () {
        ++value;
    }


    // Overload ++ when used as postfix
    void operator ++ (int) {
        value++;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;

    // Call the "void operator ++ (int)" function
    count1++; // count1.operator++()
    count1.display();

    // Call the "void operator ++ ()" function
    ++count1;

    // int x = 0;
    // int y = 0;
    // y = ++x;

    // Count c1, c2;
    // c2 = ++count1;

    count1.display();
    return 0;
}