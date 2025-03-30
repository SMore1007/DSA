/*
for default include use this :- <file.h>
for own header file include use this:- "file.h"

*/

#include<iostream>

#include"header.h" // include header file

using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;

    int sum = add(num1, num2);
    int mul = Mul(num1, num2);
    int sub = Sub(num1, num2);

    cout << "SUM:" <<sum << endl;
    cout << "MUL:" <<mul << endl;
    cout << "SUB:" <<sub << endl;
    return 0;
}