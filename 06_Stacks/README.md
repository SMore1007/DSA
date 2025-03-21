# Stack Data Structure

## What is a Stack?
A **Stack** is a linear data structure that follows the **Last In, First Out (LIFO)** principle. This means that the last element added to the stack is the first one to be removed. It is similar to a stack of plates where the last plate placed is the first one to be taken out.

## Definition
A stack is an abstract data type (ADT) that supports two primary operations:
1. **Push** - Adds an element to the top of the stack.
2. **Pop** - Removes the top element from the stack.

Additional operations include:
- **Peek (Top)** - Returns the top element without removing it.
- **isEmpty** - Checks if the stack is empty.
- **isFull** - Checks if the stack is full (for fixed-size stacks).

## Syntax
### Implementation in C
```c
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int value) {
    if (top == MAX - 1)
        printf("Stack Overflow!\n");
    else {
        stack[++top] = value;
        printf("Pushed %d\n", value);
    }
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    } else
        return stack[top--];
}

int peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return -1;
    } else
        return stack[top];
}

int main() {
    push(10);
    push(20);
    push(30);
    printf("Top element: %d\n", peek());
    printf("Popped: %d\n", pop());
    return 0;
}
```

## Stack Operations
### 1. Push Operation
- Adds an element to the top of the stack.
- If the stack is full, an **overflow condition** occurs.

### 2. Pop Operation
- Removes and returns the top element from the stack.
- If the stack is empty, an **underflow condition** occurs.

### 3. Peek Operation
- Returns the top element without removing it.

### 4. isEmpty Operation
- Checks if the stack is empty.

### 5. isFull Operation
- Checks if the stack is full (only for fixed-size stacks).

## Applications of Stack
- Function call management in recursion
- Undo/Redo functionality in applications
- Expression evaluation (postfix, prefix, infix conversion)
- Backtracking algorithms (e.g., solving mazes, browser history navigation)

---
