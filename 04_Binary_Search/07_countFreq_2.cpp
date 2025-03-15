/*
Given a sorted integers array containing a duplicates,
count occurrences of given numbers

*/

#include<iostream>
#include<vector>
using namespace std;

typedef struct 
{
    int firstel;
    int lastele;
}IndexType_t;

IndexType_t coutFreq(vector<int> &Arr, int k)
{
    int result[2];
    int start = 0, end = Arr.size() - 1;

    int first = -1;
    int last = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (Arr[mid] == k)
        {
            first = mid;  // Store the index
            end = mid - 1;  // search in left
            // start = mid + 1; // Continue searching in the right half
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
    result[0] = first;
    start = 0, end = Arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (Arr[mid] == k)
        {
            last = mid;  // Store the index
            start = mid + 1; // Continue searching in the right half
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
    result[1] = last;

    return {result[0], result[1]};
}

int main()
{
    int count = 0;
    vector<int> arr = {1,2,3,4,4,4,4,4,4,4,4,5};
    int ele;
    cout << "Enter the element which you want to cout os occurrance: ";
    cin >> ele;

    IndexType_t Index = coutFreq(arr, ele);
    cout << "Total Count of Element "<< ele << " is " << Index.lastele - Index.firstel << " "<<endl;
    return 0;
}