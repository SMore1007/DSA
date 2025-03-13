/*
Given an array of N integer and a number value the task is to find the
number of pairs of integers in  the array whose sum is equal to given sum

*/

#include<iostream>
using namespace std;


int main()
{
    int pairEle = 0;
    int sum = 0;
    int arr[8] = {2,3,4,6,4,3,2,3};
    cout << "Enter the sum: " << endl;
    cin >> sum;
    for (int i = 0; i < 8; i+=2)
    {
        if ((arr[i] + arr[i+1]) == sum)
        {
            pairEle++;
        }
    }
    cout << "Total Pair for given sum is: " << pairEle;
    return 0;
}