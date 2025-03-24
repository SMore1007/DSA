
#include<iostream>
using namespace std;

class Math
{
    private:
        /* data */
    public:
    void add(void);
    int square(int x);
};

inline void  Math:: add(void)
{
    int a = 10;
    int b = 20;
    cout << a + b;
}

inline int Math::square(int x) {
    return x * x;
}

int main()
{
    Math obj1;
    obj1.add();           // The function body is directly inserted here

    int sq = obj1.square(10);
    cout<< "\nInline function return value: " << sq << endl;
    return 0;
}