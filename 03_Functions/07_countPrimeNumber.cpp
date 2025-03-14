/*

Prime Number: A Number which is divisible by 1 and itself

*/


#include<iostream>
#include<stdbool.h>

using namespace std;

int CountPrimes(int n );
bool isPrime(int n );

int main()
{
    int No;
    cout << "Enter the number: "<<endl;
    cin >> No;
    int result = CountPrimes(No);
    cout << "Total Prime Numbers:" <<result << endl;

    return 0;
}

int CountPrimes(int n )
{
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}

bool isPrime(int n) {
    if (n < 2) return false;  // 0 and 1 are not prime numbers
    if (n == 2 || n == 3) return true;  // 2 and 3 are prime

    if (n % 2 == 0) return false;  // Eliminate even numbers

    for (int i = 3; i * i <= n; i += 2) {  // Check only odd numbers
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}