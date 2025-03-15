/*
Given a sorted integers array containing a duplicates,
count occurrences of given numbers

*/

#include<iostream>
#include<vector>
using namespace std;

int coutFreq(vector<int> &Arr, int k)
{
    int start = 0, end = Arr.size();
    int count = 0;
    for (int i = 0; i < end; i++)
    {
        if (Arr[i] == k)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> arr = {1,2,3,4,4,4,4,4,4,4,4,5};
    int ele;
    cout << "Enter the element which you want to cout os occurrance: ";
    cin >> ele;

    int count = coutFreq(arr, ele);
    cout << "\nThe " << ele << " occurre " << count <<" times" << endl;
    return 0;
}