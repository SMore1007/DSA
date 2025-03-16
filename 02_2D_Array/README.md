# 2D Arrays in C++

## Introduction
A two-dimensional (2D) array is an array of arrays, where data is stored in rows and columns. It is useful for representing matrices, tables, and grids.

## Declaring a 2D Array
```cpp
// Syntax: data_type array_name[rows][columns];
int matrix[3][3];
```

## Initializing a 2D Array
```cpp
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

## Accessing Elements in a 2D Array
```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
    cout << "Element at (0,1): " << matrix[0][1] << endl;
    return 0;
}
```

## Looping Through a 2D Array
```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

2D arrays are widely used for representing structured data like images, game boards, and mathematical computations.
