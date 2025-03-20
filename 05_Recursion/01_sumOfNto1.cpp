#include<iostream>
using namespace std;

// Recursive function
int sum(int n)
{
    if (n == 1)  // Base case
    {
        return 1;
    }
    else  // Recursive case
    {
        return n + sum(n - 1);
    }
}

int main()
{
    int n = 5;
    int totalSum = sum(n);
    cout << "Total of 1 to 5 is: " << totalSum << endl;
    return 0;
}