#include<iostream>

using namespace std;

class  A
{
    private:
        int x;
    public:
        void getX() 
        {
            cout << "Enter the number: " << endl;
            cin >> x;
        }


        void showX() const
        {
            // x = x + 2 //  Cant change data members, beacuse of const
            cout << "\n X: " << x;
        }
};

int main()
{
    A a;  // class Object

    a.getX(); // Get the value of x

    a.showX(); // Show the value of x

    return 0;
}