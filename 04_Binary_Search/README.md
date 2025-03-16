# Binary Search in C++

## Introduction
Searching is a method to find relevant information in a dataset. Binary Search is an efficient algorithm used to search for an element in a sorted dataset.

## Binary Search
Binary Search works by repeatedly dividing the search space in half until the target element is found or the search space is empty. The dataset must be sorted in either increasing or decreasing order.

### Example of Sorted Order:
- Increasing Order: `10, 20, 30, 40, ...`
- Decreasing Order: `100, 80, 50, 30, 10, ...`

## Time Complexity
- Binary Search reduces the search space by half in each step.
- Time Complexity: **O(log N)** (log base 2 of N, where N is the number of elements)

## Space Complexity
- **Iterative Binary Search**: Uses only a few variables (`left`, `right`, `mid`), so the space complexity is **O(1)**.
- **Recursive Binary Search**: Due to function call stack, the space complexity is **O(log N)**.

## Complexity Table
```
-------------------------------------------------------------------
|    Algorithm Type  |  Time Complexity   |  Space Complexity   |
-------------------------------------------------------------------
|   Iterative        |    O(log n)        |        O(1)         |
|   Recursive       |    O(log n)        |      O(log n)       |
-------------------------------------------------------------------
```

## Example: Binary Search in C++
```cpp
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    int result = binarySearch(arr, 0, n - 1, key);
    if(result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
```
