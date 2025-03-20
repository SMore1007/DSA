#include<iostream>
#include<vector>
using namespace std;

void returnMax(vector<int> N, int len, int i, int maximum)
{
    // Base condition
    if (i > len)
    {
        cout << "maximum: " << maximum << endl;
        return;
    }
    
    // Task
    if (maximum < N[i])
    {
        maximum = N[i];
    }
    
    // Recursive call
    returnMax(N, len, i+1, maximum);
}

int main()
{
    vector<int> num = {4,3,5,3,6,3,6,7}; 
    int i = 1;
    int len = num.size();
    int max = num[0];
    returnMax(num, len - 1, i, max);
    return 0;
}