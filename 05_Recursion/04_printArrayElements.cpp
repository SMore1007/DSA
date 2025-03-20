#include<iostream>
#include<vector>

using namespace std;

// here N = 15 and i = 1
void printNums(vector<int> N,int len, int i)
{
    // Base condition
    if(i == len){
        return;
    }

    // Task to do
    cout << N[i] << " ";

    // Recusrsive function calling 
    printNums(N, len, i+1);
}



int main()
{
    vector<int> num = {1,4,3,2,5,3,6,3,6,7}; 
    int i = 0;
    int len = num.size();
    cout << "Len: " << len;
    cout << "Array Elements are: " << endl;
    printNums(num, len,i);
    return 0;
}