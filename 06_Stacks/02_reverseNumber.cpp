
/*
print the number as it is by passing it to stack

*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    /* Declare the int type stack*/
    stack<int> intStack;
    int number = 12345;

    while (number != 0)
    {
        int digit = number % 10;
        intStack.push(digit);
        number = number / 10;
    }
    
    int i = 1;
    int num = 0;

    // Print the digits with commas
    while (!intStack.empty())
    {
        int ele =  intStack.top();
        intStack.pop();
        num += i * ele;
        i*=10;
    }
    
    cout << "Num: " << num << endl;
    return 0;
}