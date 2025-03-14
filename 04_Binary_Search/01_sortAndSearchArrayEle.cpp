#include<iostream>
#include<vector>

using namespace std;

void sortArray(vector<int>&Arr, int length);
int binarySearch(vector<int>&Arr, int ele);

void sortArray(vector<int>&Arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (Arr[j] > Arr[j+1] )
            {
                int temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }   
        }
    }
}

int binarySearch(vector<int>& Arr, int ele) {
    int start = 0;  // start index
    int end = Arr.size() - 1; // end index
    
    while (start <= end)
    {
        int mid = start + (end - start) / 2;  // find the current mid

        if (ele == Arr[mid]) 
        {
            return mid;
        } else if (ele > Arr[mid]) 
        {
            // search in left half
            start = mid + 1;
        } else
        {
            // Search in right half
            end = mid - 1;
        }
    }
    return -1; // Element not found
}

int main()
{
    int element = 0;
    vector<int> arr = {3,2,5,1,8};
    int len = arr.size();

    // Sort the given array
    sortArray(arr, len);

    cout << "Enter element to find in sorted array: ";
    cin >> element;

    int index = binarySearch(arr, element);

    cout << "The Element: " <<arr[index] <<" is found at: "<<index;
    return 0;
}