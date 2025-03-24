#include<iostream>

using namespace std;

#define PI 3.14
class Circle
{
    private:
        float radius;
    public:
        void init(float rad)  // Initialize the object
        {
            this->radius = rad;
        }

        void getRadius(void)
        {
            cout << "Enter rad: " << endl;
            cin >> radius;
        }

        float CalcualteArea(void)
        {
            return PI*radius*radius;
        }
};

int main(void)
{
    Circle c1; // class Object;

    c1.init(0);  // initialize the rad as 0
    c1.getRadius(); // Get the radius from user
    float area = c1.CalcualteArea(); //calculate the area

    cout << "Area is: " << area << endl;
    return 0;
}

