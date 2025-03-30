

#include<iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int Mul(int x, int y)
{
    return x * y;
}


int Sub(int x, int y)
{
    if (x > y)
    {
        return (x - y);
    }
    else
    {
        return (y - x);
    }
}