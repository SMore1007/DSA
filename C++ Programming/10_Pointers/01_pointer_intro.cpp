
/*
varibale and pointer to that variable data types should be same


*/

#include<iostream>
using namespace std;


int main()
{
    int n = 5;
    int *pN;
    pN = &n;
    cout << "N: " << n << endl;
    cout << "Addr of &N: " << &n << endl;
    cout << "ptr addr pN: " << pN << endl;
    cout << "ptr Value: *pN: " << *pN << endl;
    *pN = 30; // Update the value
    cout << "addr: " << pN << endl;
    cout << "Updated value: *pN is: " << *pN << endl;

    // system("pause>0");
    return 0;
}