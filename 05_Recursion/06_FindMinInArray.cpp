#include<iostream>
#include<vector>
using namespace std;

void returnMin(vector<int> N, int len, int i, int minimum)
{
    // Base condition
    if (i == len)
    {
        cout << "minumum: " << minimum << endl;
        return;
    }
    
    // Task
    if (minimum > N[i])
    {
        minimum = N[i];
    }
    
    // Recursive call
    returnMin(N, len, i+1, minimum);
}

int main()
{
    vector<int> num = {4,3,5,3,6,3,6,7}; 
    int i = 1;
    int len = num.size();
    int minNum = num[0];
    returnMin(num, len - 1,i, minNum);
    return 0;
}