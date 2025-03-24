/*

Given an array of integers, create a queue from it having the same elements. 
Print all the elemnts of this queue in FIFO order, separated by space

*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;


int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8};
    queue<int> data; // Creation of queue

    int len = arr.size();

    for (int i = 0; i < len; i++)
    {
        data.push(arr[i]);  // Push the each element in the queue
    }

    // print and pop the element in the queue
    while (!data.empty())
    {
        cout << data.front() << " ";
        data.pop();  // remove the element from the queue
    }
    return 0;
}