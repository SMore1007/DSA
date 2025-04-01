/*

      An inline function in C++ is a function that is expanded at the point
 of call rather than executing a function call. This reduces the overhead 
 of function calls and improves performance, especially for small, 
 frequently used functions.

*/

#include<iostream>
using namespace std;

class Math
{
    private:
        /* data */
    public:
        inline int add(int a, int b)
        {
            return a + b;
        }
};

int main()
{
    Math obj1;
    int addition = obj1.add(5,10); // The function body is directly inserted here
    cout << "sum: " << addition << endl;
    return 0;
}