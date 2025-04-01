
/*
 What are Classes and Objects in C++?

Theory:

    Class: A blueprint for creating objects. 
           It defines properties (data members) and behaviors (member functions).

    Object: An instance of a class. 
            It holds actual data and interacts with other objects.

*/

#include<iostream>
using namespace std;

class Car
{
    public:
    string brand;
    int speed;

    void showDetails()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
    }
};


int main()
{
    Car myCar; // class instance

    myCar.brand = "Toyota";
    myCar.speed = 120;

    myCar.showDetails(); 
    return 0;
}