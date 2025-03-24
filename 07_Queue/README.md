# Queue Data Structure

## Introduction
A **Queue** is a linear data structure that follows the **First In, First Out (FIFO)** principle, meaning the element added first is removed first. It is commonly used in scenarios like task scheduling, buffering, and breadth-first search algorithms.

## Types of Queues
1. **Simple Queue** - Basic FIFO queue.
2. **Circular Queue** - The last position is connected to the first position to form a circle.
3. **Priority Queue** - Elements are dequeued based on priority instead of order.
4. **Double-Ended Queue (Deque)** - Allows insertion and deletion from both ends.

## Basic Operations
- **push(ele)** Add an element at the end of the queue.
- **pop()** Remove an element from the front of the queue.
- **Front()** Return the referance to the first element of the queue.
- **back()** Return the referance to the last element of the queue.
- **size():** Return the number of elements in the queue.
- **empty()** Return true if the queue is empty.


## Applications of Queue
- CPU Scheduling
- Disk Scheduling
- Handling requests in web servers
- Printer job scheduling
- Breadth-First Search (BFS) in graphs

## Conclusion
Queues are essential in computing for handling sequential processing tasks. Choosing the right implementation (array vs. linked list) depends on the specific use case requirements.
