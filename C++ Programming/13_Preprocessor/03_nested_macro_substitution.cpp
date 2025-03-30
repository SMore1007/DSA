#include<iostream>
using namespace std;

#define PI 3.14    // Simple macro

#define valume(r)   (((4.0/3.0) * PI * ((r)* (r) * (r))))    // nested macro


int main()
{
    int radius = 4;
    cout << "Volume is: " << valume(radius) << endl;
    return 0;
}