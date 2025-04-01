/*
What is a Constructor in C++?

    Theory: A constructor is a special member function that is automatically called when an object is created.
What is a Destructor in C++?

    Theory: A destructor is a special function that is automatically invoked when an object goes out of scope. It helps release resources.
*/

#include<iostream>
using namespace std;

class Car
{
    private:
        /* data */
    public:
        Car()
        {
            cout << "car Class Constructor called" << endl;
        }
        ~Car()
        {
            cout << "Car Class Destructor called " << endl;
        }
};

int main()
{
    Car myCar;

    cout<< "\n----------------------------\nmyCar instance operations\n-------------------------------\n";
}