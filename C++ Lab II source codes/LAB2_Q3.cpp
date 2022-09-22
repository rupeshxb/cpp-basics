/* Create a class named Shape with a function that prints "This is a shape". Create another class
named Polygon inheriting the Shape class with the same function that prints "Polygon is a shape".
Create two other classes named Rectangle and Triangle having the same function which prints
"Rectangle is a polygon" and "Triangle is a polygon" respectively. Again, make another class
named Square having the same function which prints "Square is a rectangle".
Now, try calling the function by the object of each of these classes. */

#include <iostream>
using namespace std;

class Shape
{
public:
    void printShape()
    {
        cout << "This is a shape" << endl;
    }
};

class Polygon : public Shape
{
    public:
    void printShape()
    {
        cout << "Polygon is a shape." << endl;
    }
};

class Rectangle : public Polygon
{
    public:
    void printShape()
    {
        cout << "Rectangle is a polygon." << endl;
    }
};

class Triangle : public Polygon
{
    public:
    void printShape()
    {
        cout << "Triangle is a polygon." << endl;
    }
};

class Square : public Rectangle
{
    public:
    void printShape()
    {
        cout << "Sqaure is a rectangle." << endl;
    }
};

int main()
{
    Shape objShape;
    Polygon objPolygon;
    Rectangle objRectangle;
    Triangle objTriangle;
    Square objSquare;
    cout << "\n Below is printed from Shape class: \n";
    objShape.printShape();
    cout << "\n Below is printed from Polygon class: \n";
    objPolygon.printShape();
    cout << "\n Below is printed from Polygon class: \n";
    objRectangle.printShape();
    cout << "\n Below is printed from Polygon class: \n";
    objTriangle.printShape();
    cout << "\n Below is printed from Polygon class: \n";
    objSquare.printShape();
    return 0;
}
