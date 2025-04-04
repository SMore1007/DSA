#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter value of a and b: " << endl;
    cin >> a >>  b;
    int  c = a - b;
    try
    {
        if (c!= 0)
        {
            cout << 'Result: ' << (a / c);
        }
        else
        {
            throw(c);
        }
    }
    catch(int i)
    {
        cerr << " Exception caught : " << i;
    }
    cout << " End ";
}