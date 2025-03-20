/*
print nth term of febonacci 
f(n) = f(n - 1) + f(n - 2)
*/

#include<iostream>
using namespace std;

int febonacci(int N)
{
    // Base condition
    if (N == 1)
    {
        return 1;
    }
    else if (N == 2)
    {
        return 1;
    }
    
    return febonacci(N - 1) + febonacci(N - 2);
}

int main()
{
    int result = febonacci(1);
    cout << "Result: " << result << endl;
    return 0;
}