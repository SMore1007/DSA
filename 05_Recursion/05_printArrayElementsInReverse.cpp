#include<iostream>
#include<vector>

using namespace std;

// here N = 15 and i = 1
void printNums(vector<int> N,int len, int i)
{
    // Base condition
    if(i > len){
        return;
    }

    // Task to do
    cout << N[len] << " ";

    // Recusrsive function calling 
    printNums(N, len - 1, i);
}

int main()
{
    vector<int> num = {1,4,3,2,5,3,6,3,6,7}; 
    int i = 0;
    int len = num.size();
    cout << "Array Elements Reverse Order " << endl;
    printNums(num, len - 1,i);
    return 0;
}