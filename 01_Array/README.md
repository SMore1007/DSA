# 1D Arrays in C++

## Introduction
A one-dimensional (1D) array is a collection of elements of the same type, stored in contiguous memory locations and accessed using a single index.

## Declaring a 1D Array
```cpp
// Syntax: data_type array_name[size];
int numbers[5];
```

## Initializing a 1D Array
```cpp
int numbers[5] = {1, 2, 3, 4, 5};
```

## Accessing Elements in a 1D Array
```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << "First element: " << numbers[0] << endl;
    return 0;
}
```

## Looping Through a 1D Array
```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}
```

1D arrays are useful for storing sequences of values like lists, scores, or simple data structures.