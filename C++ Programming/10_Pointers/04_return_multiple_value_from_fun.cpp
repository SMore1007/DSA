#include<iostream>
#include<vector>

using namespace std;

void fun(vector <int> arr, int *max, int *min)
{
    int len = arr.size();

    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < len; i++)
    {
        if (*max < arr[i])
        {
            *max = arr[i];
        }
        else if(*min > arr[i])
        {
            *min = arr[i];
        }
    } 
}


int main()
{
    int min = 0;
    int max = 0;
    vector<int> arr = {5,4,-2,29,6};

    fun(arr, &max, &min);

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}