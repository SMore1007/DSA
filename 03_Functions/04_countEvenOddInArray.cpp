/*
Given an int array, Write a funtion that count the 
even and odd numbers in it
*/

#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

void CountEvenOddd(vector<int> arr, int len);


int main()
{
    vector<int> arr =  {10,20,30,40,50,60,79,80,90,100};  // Int Vector 
    int len = arr.size();
    CountEvenOddd(arr, len);
    return 0;
}

void CountEvenOddd(vector<int> arr, int len)
{
    int Odd = 0;
    int even = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else if(arr[i] % 2 != 0)
        {
            Odd++;
        }
    }
    cout << "Even Count: " << even << endl;
    cout << "Odd Count: "  << Odd << endl;
}
