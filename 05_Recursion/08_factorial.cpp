/*
factorial of: 5

is =  5*4*3*2*1 = 120

*/ 

#include<iostream>
using namespace std;

int factorial(int n, int fact)
{
    // Base condition
    if(n == 0)
    {
        return fact;
    }

    // Task
    fact = fact * n; 
   
    // Recursive call
    return factorial(n - 1, fact);
}

int main()
{
    int fact = 1;
    for (int i = 1 ; i <= 10; i++)
    {
        int result = factorial(i, fact);
        cout << "factorial of "<< i << " is: "  << result << endl;
    }
    return 0;
}