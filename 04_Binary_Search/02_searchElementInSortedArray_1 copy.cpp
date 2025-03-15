/*

Given a sorted array of int and an element k,
write a function which returns the index on which k is present uisng loops

return -1 if element os not found

*/

#include<iostream>
#include<vector>

using namespace std;

int findIndex(vector<int> &Arr, int K);

// main function
int main()
{
    vector<int> arr = {1,3,4,5,7,9}; // Sorted array
    int element;
    cout << "Enter the element: ";
    cin >> element;
    int index = findIndex(arr, element);
    cout << "Element is found at: "<< index << endl;
    return 0;
}

// Binry search function
int findIndex(vector<int> &Arr, int k)
{
    int start = 0;
    int end = Arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Mid calculation
        if (k == Arr[mid])
        {
            // Element found at
            return mid;
        }
        else if(k > Arr[mid])
        {
            // Find in right half
            start = mid + 1;
        }
        else
        {
            // Find in left half
            end = mid - 1;
        }
    }
    // Element Not found
    return -1;
}