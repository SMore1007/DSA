#include<iostream>
using namespace std;

#define PI 3.14
int rad;
class Circle
{
    private:
        /* data */
    public:
        void getValue(void);
        void CalculateArea(void);
};

void Circle::getValue(void)
{
    
    cout << "Enter rad: " << endl;
    cin >> rad;

}

void Circle::CalculateArea(void)
{
    float area = PI*rad*rad;
    cout << "Area of Circle: " << area << endl;
}

int main()
{
    Circle c1; // class Object

    c1.getValue();
    c1.CalculateArea();

    return 0;
}