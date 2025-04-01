#include<iostream>
using namespace std;


class Distance
{
private:
    int feet;
    float inches;
public:

    void getDist()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "\nEnter inches: " ;
        cin >> inches;
    }

    void showDistance()
    {
        cout << "Feet: " << feet << endl;
        cout << "Inches: " << inches << endl;
    }
};

int main()
{
    Distance d1; // class Object

    d1.getDist(); // class method calling

    d1.showDistance();

    return 0;
}
