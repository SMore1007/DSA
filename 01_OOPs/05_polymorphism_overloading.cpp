/*
What is Polymorphism?

Theory: Polymorphism allows one interface to be used for different data types. 
        It can be achieved via function overloading and function overriding.

*/

/*
Function Overloading: 
     Function Overloading (Compile-time Polymorphism)
     Same function name but different arguments
*/

#include<iostream>
using namespace std;

class Math
{
        private:
                /* data */
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
        Math m;
        cout << "Function Overloading example" << endl;
        int sum1 = m.add(20,30);
        int sum2 = m.add(10,20,30);
        cout << "a + b = "<< sum1 << endl << "x + y + z = " << sum2 << endl;
}
