
/*

Given a sorted array of integers and an element k, write a function
which print the first index of occurrance of an element k

*/

#include<iostream>
#include<vector>
using namespace std;


int searchFirstIndexBinarySearch(vector<int> &Arr, int K);


int main()
{
    vector<int> arr = {1,5,5,5,5,7,8,9};
    int ele = 0;
    cout << "Which element do you want to find: " << endl;
    cin >> ele;
    int index = searchFirstIndexBinarySearch(arr, ele);
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

int searchFirstIndexBinarySearch(vector<int> &Arr, int k)
{
    int start = 0;
    int end = Arr.size() - 1;

    int result = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (Arr[mid] == k)
        {
            result = mid;
            end = mid - 1;  // search in left
        }
        else if(Arr[mid] > k)
        {
            start = mid + 1;
        }
        else if(Arr[mid] < k)
        {
            end = mid - 1;
        }       
    }
    return result;
    
}