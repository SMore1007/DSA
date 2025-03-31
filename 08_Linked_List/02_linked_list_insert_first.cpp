#include<iostream>

using namespace std;

// Node class
class Node
{
    public:
    int value;
    Node *Next;
};

void printLL(Node * n)
{
    while (n != NULL)
    {
        cout << n->value << ", ";
        n = n->Next;
    }
}

// insert at the front

void insertAtFron(Node **head, int val) // Pointer to poit
{
    // 1. Preapre the new node
    Node *newNode = new Node();
    // 2. Put it in front of the current head
    newNode->Next = head;
    // 3. Move head of the list to point to the newNode


}


int main()
{
    int Insert_value_at_frist = 90;
    // Creating space for the linked list
    Node *head = new Node();
    Node *second_node = new Node();
    Node *third_node = new Node();
    Node *forth_node = new Node();

    // Assigning value to data of the nodes
    head->value = 10;
    second_node->value = 20;
    third_node->value = 30;
    forth_node->value = 50;

    // Linking the nodes one by one
    head->Next = second_node;
    second_node->Next = third_node;
    third_node->Next = forth_node;
    forth_node->Next = NULL;  // Last node point to NULL in single linked list

    
    insertAtFron(&head, Insert_value_at_frist);

    // print Linked List
    printLL(head);
    return 0;
}