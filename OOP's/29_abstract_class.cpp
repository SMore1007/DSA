#include<iostream>

using namespace std;

class Shape
{
    private:


    public:
        virtual void drow() = 0;  // pure virtual function
};


class Circle : public Shape
{
    private:
        /* data */
    public:
        void drow()
        {
            cout << "running a pure virtual function" << endl;
        }
};


int main()
{
    Circle c1;

    c1.drow(); // calliing a virtual function

    return 0;
}