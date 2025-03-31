
/*

Virtual Function in C++

    A virtual function in C++ is a member function in a base class that can be overridden in a derived class 
    while enabling runtime polymorphism (dynamic method dispatch). 
    This means that when a function is called using a base class pointer or reference, 
    the function in the derived class is executed if it is overridden.

Why Use Virtual Functions?

    Enables dynamic binding (runtime polymorphism).

    Allows calling the most derived function even when using a base class pointer/reference.

    Supports method overriding in object-oriented programming.

*/

#include<iostream>
using namespace std;

class Base
{
    private:

    public:

    // Virtual function
    virtual void Show()
    {
        cout << "This is from the base class" << endl;
    }

};


class Derived : public Base
{
    private:


    public:

    void Show() override  // Overriding the  base class
    {
        cout << "This is from derived class" << endl;
    }
};


int main()
{

    Base *b1; // Base class pointer
    Derived d;
    b1 = &d;
    b1->Show();

    return 0;
}