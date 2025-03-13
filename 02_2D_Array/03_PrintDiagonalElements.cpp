#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{2,4,3},
                     {6,7,8},
                     {2,5,6}};

    cout << "Pricipal and secondary matrix Diagonal is"<< endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(i+j == 2 | i == j){
                cout << arr[i][j] << " ";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}