#include<iostream>
using namespace std;

#define MIN(a, b)  ((a < b) ? a : b )  // macro with arguments
#define MAX(a,b)   ((a > b) ? a : b )

int main()
{
    int x, y;

    x  = 10;
    y = 20;
    
    cout << "maximum of x and y is: " << MAX(x, y) << endl;

    cout << "minimum of x and y is: " << MIN(x, y) << endl;
}