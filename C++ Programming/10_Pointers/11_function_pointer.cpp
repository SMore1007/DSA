#include<iostream>

using namespace std;

void fun()
{
    cout << "This is the from function pointer" << endl;
}

int add(int a, int b)
{
    return a+ b;
}


int main()
{

    // declaring a function pointer

    void (*ptr)();
    int (*pSum)(int , int); // funtion pointer declaraion

    // Assign the function address to the pointer
    ptr = &fun;

    pSum = &add;

    cout << "function pointer addition: " << pSum(20,30);

    // ptr();

    return 0;
}