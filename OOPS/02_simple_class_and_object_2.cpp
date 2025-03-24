#include<iostream>

using namespace std;

#define PI 3.14
class Circle
{
private:
    float raduis;
public:
    void getRadius()
    {
        cout << "Enter Radius:::";
        cin >> raduis;
    }

    void showRadius()
    {
        cout << "Radius: " << raduis<<endl;
    }

    void calculateArea()
    {
        float area = 2*PI*raduis;

        cout << "Area: " << area << endl;
    }

};

int main()
{
    Circle c1;

    c1.getRadius(); // Get the radius first
    c1.showRadius(); // shouw given ardius 
    c1.calculateArea(); // calculate the area 
    return 0;
}