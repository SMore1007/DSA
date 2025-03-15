/*

Given a sorted array of integers and an element k, write a function
which print the first index of occurrance of an element k

*/


#include <iostream>
#include <vector>
using namespace std;

int searchLastIndexBinarySearch(vector<int> &Arr, int K);

int main()
{
    vector<int> arr = {1, 5, 5, 5, 5, 7, 8, 9};
    int ele;
    
    cout << "Which element do you want to find: ";
    cin >> ele;

    int index = searchLastIndexBinarySearch(arr, ele);

    if (index != -1)
    {
        cout << ele << " is last found at index: " << index << endl;
    }
    else
    {
        cout << ele << " is not present in the array" << endl;
    }
    
    return 0;
}

int searchLastIndexBinarySearch(vector<int> &Arr, int k)
{
    int start = 0, end = Arr.size() - 1;
    int result = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (Arr[mid] == k)
        {
            result = mid;  // Store the index
            start = mid + 1; // Continue searching in theright half
        }
        else if (Arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    
    return result;
}
