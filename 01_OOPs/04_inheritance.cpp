/*
What is Inheritance?

 Inheritance allows a class (child) 
 to acquire properties and behaviors from another class (parent), enabling code reusability.

*/

#include<iostream>
using namespace std;

class Vehical
{
    public:
    string brand = "Ford";
};


class Car : public Vehical
{
    public:
    string model = "Mustang";
};

int main()
{
    Car myCar;
    cout <<"From class Vechical: " << myCar.brand << ", from class Car: " << myCar.model << endl;
    return 0;
}