# Linked List in C++

## Overview
This repository contains an implementation of a **Singly Linked List** in C++. A linked list is a dynamic data structure where elements (nodes) are connected using pointers. Each node consists of a **data field** and a **pointer to the next node** in the sequence.

## What is a Linked List?
A **Linked List** is a linear data structure where elements are stored in nodes, which are connected using pointers. Unlike arrays, linked lists provide efficient insertions and deletions as they do not require contiguous memory allocation.

### Types of Linked Lists
1. **Singly Linked List** - Each node points to the next node.
2. **Doubly Linked List** - Each node points to both the next and previous nodes.
3. **Circular Linked List** - The last node points back to the first node.

## Advantages of Linked Lists
- **Dynamic Memory Allocation** - Nodes are allocated memory as needed.
- **Efficient Insertions/Deletions** - Unlike arrays, no shifting is required.
- **Flexible Size** - The size of a linked list is not fixed like an array.

## Disadvantages of Linked Lists
- **Extra Memory Usage** - Each node requires additional memory for the pointer.
- **Sequential Access** - Unlike arrays, random access is not possible.

## Syntax of Linked List in C++
A basic structure of a node in a linked list is as follows:

```cpp
struct Node {
    int data;    // Data part of the node
    Node* next;  // Pointer to the next node
};
```

A simple way to create and manipulate a linked list in C++:

```cpp
class LinkedList {
private:
    Node* head;  // Pointer to the first node
public:
    LinkedList() { head = nullptr; }

    void insertAtEnd(int val) {
        Node* newNode = new Node{val, nullptr};
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
```

## Features
- Insert elements at the beginning, end, or a specific position
- Delete elements from the beginning, end, or a specific position
- Display the linked list
- Search for an element in the linked list
- Reverse the linked list

## Prerequisites
To compile and run the C++ program, ensure you have:
- A C++ compiler (e.g., g++, Clang, MSVC)
- A code editor (e.g., VS Code, Code::Blocks, or any text editor)

## Usage
Clone the repository and compile the program using a C++ compiler.

### Compilation & Execution
```sh
# Compile the program
g++ linked_list.cpp -o linked_list

# Run the executable
./linked_list
```

## Sample Code
```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() { head = nullptr; }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display();
    return 0;
}
```