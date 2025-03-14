/*

Given a two numbers, start and end, Write a function 
that prints all the numbers from start to end (both included)

*/

#include<iostream>
using namespace std;

void printRange(int min, int max);

int main()
{
    int a, b;
    cout << "Enter the min: \n";
    cin >>a;
    cout << "Enter the max: \n";
    cin >> b;
    printRange(a, b);
    return 0;
}


void printRange(int min, int max)
{
    cout << "As per given range is:"<< endl;
    for (int i = min; i <= max; i++)
    {
        cout << i << " ";
    }
}