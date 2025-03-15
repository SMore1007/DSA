/*

Serach element K in a sorted array -2

Given a sorted array of integers and an element k,
write a function which returns the index on which K
is present, using recursion.

return - 1 if the element is not present

*/


#include<iostream>
#include<vector>

using namespace std;  // standard Input Output

int findIndexOfElement(vector<int> &Arr,int start, int end, int Ele);
int findIndexlinearSearch(vector<int> &Arr, int start, int end, int Ele);
int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int k, start;
    int end = arr.size() - 1;
    cout<<"Enter a element to find: ";
    cin >> k;
    int Index = findIndexOfElement(arr,start, end, k);  // Binary Search using Recursion

    int index = findIndexlinearSearch(arr, start, end, k); // Linear search using recursion
    cout << "Element found at: " << index << endl;
    return 0;
}


// Binary Search by recursion
int findIndexOfElement(vector<int> &Arr, int start, int end, int Ele)
{
    if (start > end)  // Base case: Element not found
        return -1;

    int mid = start + (end - start) / 2;

    if (Arr[mid] == Ele)  // Element found
        return mid;
    else if (Arr[mid] < Ele)  // Search in the right half
        return findIndexOfElement(Arr, mid + 1, end, Ele);
    else  // Search in the left half
        return findIndexOfElement(Arr, start, mid - 1, Ele);
}

// Find the ele using linear search and recursion method
int findIndexlinearSearch(vector<int> &Arr, int start, int end, int Ele)
{
    if(start == end)
    {
        return -1;
    }

    if(Arr[start] == Ele)
    {
        return start;
    }
    return findIndexlinearSearch(Arr, start+1, end, Ele);
}