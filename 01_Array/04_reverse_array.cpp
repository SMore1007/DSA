/*
Reverse an array of N integers, without extra space in the memory

*/

#include<iostream>
#include<vector>
#include<array>

using namespace std;

int N = 5;
int main()
{
    int arr[N] = {1,2,3,4,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << " Given array is\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < N/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[N - i - 1];
        arr[N - i - 1] = temp;
    }

    cout << "\nReverse array is\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}