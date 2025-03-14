#include<iostream>
using namespace std;

int add(int a, int b, int c); // Function Declaration with parametes adding in it
int main()
{
    int A = 10;
    int B = 30;
    int C = 50;
    int resultSum = add(A, B, C); // Function Calling with Providing arguments
    cout << "Sum : "<< resultSum << endl;
    return 0;
}

int add(int a, int b, int c)  // Function definition
{
    return a + b + c;
}