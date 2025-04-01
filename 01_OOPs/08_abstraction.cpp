/*

What is an Abstract Class?

    Theory: A class that has at least one pure virtual function 
            and cannot be instantiated.

*/

#include<iostream>
using namespace std;


// Abstract class
// An abstract class is a class that contains at least one pure virtual function and cannot be instantiated.
class Shape
{
    public:

    // Pure virtual function
    virtual void draw() = 0;

    void showsmg()
    {
        cout << "This is a shape!" << endl;
    }
};

// Derived class implementing the abstract class

class Circle : public Shape 
{
    public:

    void draw() override
    {
        cout << "Drawing a circle" << endl;
    }
};


class Rectangle : public Shape
{
    public:

    void draw() override
    {
        cout << "Drawing a Rectangle" << endl;
    }
};


int main()
{
    // Shape obj; // Error: cannot instantiate because of abstract

    Circle c;
    Rectangle r;

    c.draw();
    c.showsmg();
    r.draw();
    r.showsmg();

    return 0;
}