#include<iostream>

using namespace std;


class Math
{
    public:

    int add(int a, int b)
    {
        return (a + b);
    }

    int add(int x, int y, int z)
    {
        return (x + y + z);
    }

};

int main()
{
    // class instance

    Math m1;

    int two_argument_result = m1.add(10,20);
    int three_argument_result = m1.add(10,20,30);
    
    cout << two_argument_result << endl;
    cout << three_argument_result << endl;
    
    return 0;
}