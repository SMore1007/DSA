/*

GIven an number n print number from n to 1 order

*/

#include<iostream>
using namespace std;
void printreverse(int n);

void printreverse(int n)
{
    // Base Condition
    if(n < 1)
    {
        return;
    }
    // Task
    cout << n << endl;

    // Recusive Call
    printreverse(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    printreverse(n);
    return 0;
}