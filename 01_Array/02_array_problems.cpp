#include<iostream>
using namespace std;

int findSum(int * arr, int len);
int findMax(int * arr, int len);
int coutEven(int *arr, int len);
int coutOdd(int *arr, int len);

int main()
{
    int arrayis[10] = {1,2,4,3,4,3,5,3,5,2};
    int length = sizeof(arrayis) / sizeof(arrayis[0]);
 
    int totalSum = findSum(arrayis, length);
    int maxElement = findMax(arrayis, length);
    int TotalEvenNumber = coutEven(arrayis,length);
    int TotalOddNumber = coutOdd(arrayis,length);

    cout << "Total Array Elements: " << length << endl;
    cout << "Total Sum: " << totalSum << endl;
    cout << "Max Elements: " << maxElement <<endl;
    cout << "Total Even Numbers: " << TotalEvenNumber << endl;
    cout << "Total Odd Numbers: " << TotalOddNumber << endl;
    return 0;
}

int findSum(int * arr, int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int findMax(int * arr, int len)
{
    int max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
} 

int coutEven(int *arr, int len)
{
    int evenCount = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
    }
    return evenCount;
}

int coutOdd(int *arr, int len)
{
    int oddCount = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddCount++;
        }
    }
    return oddCount;
}