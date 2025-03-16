# Recursion

## Introduction
Recursion is a fundamental programming concept where a function calls itself to solve a problem. It is widely used in algorithms such as divide and conquer, dynamic programming, and tree traversal. Recursion helps in solving complex problems by breaking them down into smaller, more manageable subproblems.

## Definition
Recursion is a technique in which a function calls itself directly or indirectly to solve a given problem. A recursive function continues to call itself until a base condition is met, preventing infinite recursion.

## Recursive Equation
A recursive function is often defined using a recursive equation, which consists of:
- **Base Case**: The terminating condition that stops recursion.
- **Recursive Case**: The rule that breaks the problem into smaller subproblems and calls the function recursively.

## General Framework of Recursion
To write a recursive function, follow these general steps:

1. **Define the Base Case**: Identify the simplest case where the function should return a result without making a recursive call.
2. **Identify the Recursive Case**: Determine how the problem can be broken down into smaller subproblems.
3. **Combine the Results**: Ensure that the recursive calls correctly combine to form the final solution.
4. **Ensure Termination**: Verify that recursive calls eventually reach the base case to prevent infinite recursion.

### Example: Factorial Function
```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) // Base case
        return 1;
    else // Recursive case
        return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}
```

Recursion is a powerful technique, but it must be used carefully to avoid excessive memory consumption and stack overflow errors. Understanding recursion helps in writing efficient algorithms for problems like tree traversal, sorting, and dynamic programming.
