/*

Prime Number: A Number which is divisible by 1 and itself

*/


#include<iostream>
#include<stdbool.h>

using namespace std;

bool isPrime(int n );


int main()
{
    int No;
    cout << "Enter the number to find the prime or not: "<<endl;
    cin >> No;
    bool result = isPrime(No);
    result == true ? cout << "Given Number is Prime" : cout << "Given number is Not a Prime" << endl;

    return 0;
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