#include<iostream>
using namespace std;


int main()
{
    int arr[5] = {2,3,5,6,9};


    for (int i = 0; i < 5; i++)
    {
        cout << "Number: ";
        cin >> arr[i];
    }

    for (int i = 0; i <= 5; i++)
    {
        cout << *((arr+i)) << " ";
    }
    
    return 0;
}