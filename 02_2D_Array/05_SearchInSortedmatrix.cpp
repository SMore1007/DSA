// Sort the given matrix

#include<iostream>
using namespace std;
#define ROW 3
#define COL 3

int a = 0;
int flatArray[ROW * COL]; // temp flat array

void printMatrix(int arr[ROW][COL]);
void matrixToArray(int arr[ROW][COL]);
void printFlatArray(int arr[], int len);
void sortFlatArray(int arr[], int len);
int findEleMatrix(int arr[ROW][COL], int ele);

int  main()
{

    int arr1[ROW][COL] = {
        {5,4,8},
        {6,3,6},
        {6,7,2}
    };

    printMatrix(arr1); // print the given Matrix
    matrixToArray(arr1); // Make the flat array
    printFlatArray(flatArray, ROW*COL); // print the array
    sortFlatArray(flatArray, ROW*COL);  // Sort the flat array
    printFlatArray(flatArray, ROW*COL); // Print updated sort array

    // Update the array
    a = 0;
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            arr1[i][j] =  flatArray[a++];
        }
    }

    cout << "\nSorted matrix is\n";
    printMatrix(arr1); // print the updated Matrix

    int ele;
    cout<< "Enter the element to find in matrix: ";
    cin>> ele;
    int result = findEleMatrix(arr1, ele);
    result == 1 ? cout<< "Element Fount\n": cout << "Element Not Found\n";

    return 0;
}


// Print the given matrix
void printMatrix(int arr[ROW][COL])
{
    
    cout << " Matrix Before Sorting\n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}

void matrixToArray(int arr[ROW][COL])
{
    // Make the flat array
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            flatArray[a++] = arr[i][j];
        }
    }
}

void printFlatArray(int arr[], int len)
{
    // Print the flat array
    cout<<"\nFlat array\n";
    for(int i = 0; i < len; i++)
    {
        cout <<  flatArray[i] << " ";
    }
}

void sortFlatArray(int arr[], int len)
{
    // Sort the flat array
    for (int i = 0; i < len; i++)
    {
      for (int j = 0; j < len - i - 1; j++)
      {
            if (flatArray[j] > flatArray[j + 1])
            {
            int temp = flatArray[j];
            flatArray[j] = flatArray[j + 1];
            flatArray[j + 1] = temp;
            }
      }
    }    
}

int findEleMatrix(int arr[ROW][COL], int ele)
{
      int flag = 0;
      for (int i = 0; i < ROW; i++)
      {
          for (int j = 0; j < COL; j++)
          {
            if(arr[i][j] == ele)
            {
                  flag = 1;
                  break;
            }
          }
      }
      return flag;
}