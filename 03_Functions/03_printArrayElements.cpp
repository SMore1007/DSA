/*
Given an int array, Write a funtion that prints all
the elements present in the array separated by a space
*/

#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

void printIntArray(vector<int> arr, int len);
void printStrArray(vector<string> arr, int len);
void printCharArray(int arr[], int len);

int main()
{
    vector<int> arr =  {10,20,30,40,50,60,70,80,90,100};  // Int Vector 
    int len = arr.size();
    vector<string>Names = {"Sagar", "Anand", "Akshay", "Diganmabr", "Sushant", "Shubhangi", "Humanshu"}; // string Vector 
    int namelen = Names.size();
    
    printIntArray(arr, len);
    printStrArray(Names, namelen);
    return 0;
}

void printIntArray(vector<int> arr, int len)
{
    cout << "Int array\n";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ", ";
    }
}

void printStrArray(vector<string> arr, int len)
{
    cout <<"\nString array\n";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ", ";
    }
}