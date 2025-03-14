/*
GIven an int n, write a function that retiurne
the sum of all the natural numbers from 1 to n
*/

#include<iostream>
using namespace std;


int naturalNoSum(int n);

int main()
{
    int N;
    cout << "Enter the Number: ";
    cin >> N;
    int NaturalSum = naturalNoSum(N);
    cout << "Sum of the given natural numbers: " << NaturalSum << endl;
    return 0;
}


int naturalNoSum(int n){
    int sum = 0;
    int i = 1;
    while (i <= n){
        sum = sum + i;
        i++;
    }
    return sum;
}