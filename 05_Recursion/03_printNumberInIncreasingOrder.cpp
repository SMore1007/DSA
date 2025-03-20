#include<iostream>
using namespace std;

// here N = 15 and i = 1
void printNums(int N, int i)
{
    // Base condition
    if(N+1 == i)
    {
        return;
    }

    // Task to do
    cout << i << " ";

    // Recusrsive function calling by spacific condition
    printNums(N, i+1);
}



int main()
{
    int num = 0;
    int i = 1;
    cout << "Enter the number: " << endl;
    cin >> num;
    printNums(num, i);
    return 0;
}