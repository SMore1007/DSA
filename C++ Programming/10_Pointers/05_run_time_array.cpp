#include<iostream>

using namespace std;

int main()
{
    int size = 6;
    int *array = new int[size]; // run time memory creation

    cout << "Enter array ele:\n";

    for (int i = 0; i < 6; i++)
    {
        cin >> array[i];
    }
    
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }  


    return 0;
}