/* We want to calculate the total marks of each student of a class in Physics,Chemistry and
Mathematics and the average marks of the class. The number of students in the class are entered
by the user. Create a class named Marks with data members for roll number, name and marks.
Create three other classes inheriting the Marks class, namely Physics, Chemistry and
Mathematics, which are used to define marks in individual subject of each student. Roll number
of each student will be generated automatically. */

#include<iostream>
#include<string>
using namespace std;

class Marks{
    public:
    int roll_no;
    string name;
    int marks;

}

class Physics:public Marks{

}

class Chemistry:public Marks{

}

class Mathematics:public Marks{

}

int main(){

    return 0;
}

