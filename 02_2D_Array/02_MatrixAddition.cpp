#include<iostream>

using namespace std;

int main()
{
    int sum[2][2];
    int arr1[2][2] = {{2,2},{2,2}};
    int arr2[2][2] = {{2,2},{2,2}};
    cout<< "Matrix 1: "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout  << arr1[i][j] << " ";
        } 
        cout<<endl;
    }

    cout<< "Matrix 2: "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout  << arr2[i][j] << " ";
        } 
        cout<<endl;
    }
    cout << "Sum of above two Matrix\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout  << sum[i][j] << " ";
        } 
        cout<<endl;
    }
}