/*

Given an array of sorted charaters consisting of lowercase alphabets 
and a particular target value, say k, the task is to find the smallest 
element in the list that is larger than k.

print -1 if such element is not present

*/

#include<iostream>
#include<vector>
using namespace std;

int findSmallerButLargerThanGivenChar(vector<char> & Arr, char chr);

int main()
{
    vector<char> arr = {'d', 'j', 'm', 'n'};
    char chr;
    cout << "Enter char to find Smaller But Larger Than Given Char: " << endl;
    cin >> chr;
    int index = findSmallerButLargerThanGivenChar(arr, chr);
    if (index >= 0 && index <= (arr.size() - 1))
    {
        cout << "Smallest Char But Larger Than Given Char is: " << arr[index] << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }
    
    return 0;
}

int findSmallerButLargerThanGivenChar(vector<char> & Arr, char chr)
{

    int start = 0;
    int end = Arr.size() - 1;

    int currentIndex = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (Arr[mid] == chr)
        {
            currentIndex = mid;
            start = mid + 1;

        }
        else if (chr < Arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }    
    }

    if (currentIndex != Arr.size())
    {
        return (currentIndex + 1);
    }
    else
    {
        return -1;
    }
}