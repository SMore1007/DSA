#include<iostream>

using namespace std;


class Demo
{
private:   // Private arguments and methods
    /* data */
public:    // Public arguments and methods
    void disply()
    {
        cout << "Welcome to Object oriented programming" << endl;
    }
};

int main()
{
    Demo d;   // Class object

    d.disply();  // calling a method of calss
    return 0;
}
