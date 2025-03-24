#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};

    int len = a.size();
    stack<int> S1;

    // Push elements onto the first stack
    for (int i = 0; i < len; i++)
    {
        S1.push(a[i]);
    }

    stack<int> S2;

    // Transfer elements from S1 to S2
    while (!S1.empty())
    {
        S2.push(S1.top());
        S1.pop();
    }

    cout << "The elements of the given array in FIFO order: ";

    // Print elements in FIFO order
    while (!S2.empty())
    {
        cout << S2.top() << " ";
        S2.pop();
    }
    cout << endl;

    return 0;
}
