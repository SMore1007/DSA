# Functions 

## Introduction
Functions in C++ are blocks of reusable code that perform a specific task. They help in modular programming, making code more readable, maintainable, and efficient. In Data Structures and Algorithms (DSA), functions play a key role in implementing sorting, searching, recursion, and various data structures.

## Function Syntax
```cpp
return_type function_name(parameters) {
    // Function body
    return value; // (if return_type is not void)
}
```

## Types of Functions
1. **User-Defined Functions**: Functions created by the programmer.
2. **Predefined Functions**: Standard library functions like `sqrt()`, `sort()`, etc.
3. **Recursive Functions**: Functions that call themselves to solve a problem.

## Advantages of Using Functions in DSA
- **Code Reusability**: Functions allow reuse of code, reducing redundancy.
- **Modularity**: Helps in breaking down complex problems into smaller parts.
- **Improved Debugging**: Easier to test and debug specific parts of the program.
- **Better Readability**: Code is more structured and easier to understand.

## Example: Function to Find Maximum of Two Numbers
```cpp
#include <iostream>
using namespace std;

int maxNum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    cout << "Maximum: " << maxNum(x, y) << endl;
    return 0;
}
```
