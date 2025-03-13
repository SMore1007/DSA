// Sort the given matrix

#include<iostream>
using namespace std;

#define ROW 3
#define COL 3

int a = 0;
int flatArray[ROW * COL]; // temp flat array

int  main()
{
    int arr1[ROW][COL] = {
        {5,4,8},
        {6,3,6},
        {6,7,2}
    };

    // Print the given matrix
    cout << " Matrix Before Sorting\n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << arr1[i][j]<< " ";
        }
        cout << endl;
    }

    // Make the flat array
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            flatArray[a++] = arr1[i][j];
        }
    }

    // Print the flat array
    cout<<"\nFlat array\n";
    for(int i = 0; i < ROW * COL; i++)
    {
        cout <<  flatArray[i] << " ";
    }


    // Sort the flat array
    for (int i = 0; i < ROW*COL; i++)
    {
        for (int j = 0; j < ROW*COL - i - 1; j++)
        {
            if (flatArray[j] > flatArray[j + 1])
            {
                int temp = flatArray[j];
                flatArray[j] = flatArray[j + 1];
                flatArray[j + 1] = temp;
            }
        }
    }
    // Print the sorted flat array
    cout<<"\nSorted Flat array\n";
    for(int i = 0; i < ROW * COL; i++)
    {
        cout <<  flatArray[i] << " ";
    }
    // Update the arr1
   
    a = 0;
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            arr1[i][j] =  flatArray[a++];
        }
    }

    // Print the Updated Matrix
    cout << "\nMatrix After Sorting....\n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << arr1[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;
}