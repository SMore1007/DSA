#include<iostream>
using namespace std;

void printArray(int *arr, int len);

int main()
{
    int arrayis[10] = {1,2,4,3,4,3,5,3,5,2};
    int length = sizeof(arrayis) / sizeof(arrayis[0]);

    cout << "Length: "<<length << endl;
    printArray(arrayis, length);
    return 0;
}

void printArray(int *arr, int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] <<" ";
    }
}