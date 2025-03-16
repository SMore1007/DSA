#include<iostream>
#include<vector>
using namespace std;

int findFirstIndexOfK(vector<int> &Arr, int k)
{
    int start = 0;
    int end = Arr.size() - 1;
    int result = -1; // Fix

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (Arr[mid] == k)
        {
            result = mid;
            end = mid - 1;  // Continue searching in the left half
        }
        else if (k < Arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return result; // Return -1 if not found
}

int findLastIndexOfK(vector<int> &Arr, int k)
{
    int start = 0, end = Arr.size() - 1;
    int result = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (Arr[mid] == k)
        {
            result = mid;   // Store the index
            start = mid + 1; // Continue searching in the right half
        }
        else if (k < Arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return result; // Return -1 if not found
}

int main()
{
    int k;
    cout << "Enter the element: ";
    cin >> k ;
    vector<int> arr = {2,2,2,3,4,5,6,6,6,6,6,6,8,9,10};
    int firstIndex = findFirstIndexOfK(arr, k);
    int lastIndex = findLastIndexOfK(arr, k);
    cout << "The freuency of element " << k << " is: "<< lastIndex - firstIndex + 1 << endl;
    return 0;
}