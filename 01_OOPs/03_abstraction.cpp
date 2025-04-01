/*

What is Abstraction?

Theory: Abstraction hides complex implementation details and only exposes essential functionalities to the user.

*/

#include<iostream>
using namespace std;

class Car
{
    private:
    string brand;
    int speed;

    public:

    void setCarDetails(string name, int spd)
    {
        this->brand = name;
        this->speed = spd;
    }
    void start()
    {
        cout << "My Car is started..." << endl;
    }

};


int main()
{
    Car myCar; // class instance
    myCar.setCarDetails("Toyota",120);
    myCar.start();

    return 0;
}