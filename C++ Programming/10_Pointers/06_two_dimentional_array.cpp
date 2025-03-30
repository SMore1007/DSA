#include<iostream>
using namespace std;


int main()
{
    int arr[2][2] = {{24,53}, {67,45}};

    int *ptr;
    ptr = &arr[0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << *(ptr + i * 2 + j) << " ";
        }
        cout << endl;
    }
    

}