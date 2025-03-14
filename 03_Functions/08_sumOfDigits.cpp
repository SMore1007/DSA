/*
Sum of the digits of given numbers
*/

#include<iostream>
using namespace std;

int sumOfDigits(int n);

int main()
{
    int Number;
    cout << "Enter the Number: " << endl;
    cin >> Number;
    int Sum = sumOfDigits(Number);
    cout << "Sum of the digits: " << Sum <<endl;
}

int sumOfDigits(int n)
{
    int sum = 0;

    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}