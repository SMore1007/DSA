#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reverseQueue(queue<int> &q)
{
    stack<int> s;

    // Step 1: Dequeue from the queue and push onto the stack
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Pop from the stack and enqueue back into the queue
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}

void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "Original Queue: ";
    printQueue(q);

    reverseQueue(q);

    cout << "Reversed Queue: ";
    printQueue(q);

    return 0;
}
