#include<iostream>
using namespace std;


class Sum
{
    private:
        int num1, num2;  // Private members
    public:
        void setNumbers(int num1, int num2)
        {
            this->num1 = num1;
            this->num2 = num2;
        }

        void showNumbers()
        {
            cout << "Num1: " << num1 << endl;
            cout << "Num2: " << num2 << endl;
        }
};


int main()
{
    Sum obj1;

    int num1 = 0;
    int num2 = 0;

    cout << "Enter Number1: " << endl;
    cin >> num1;
    cout << "Enter Number2: " << endl;
    cin >> num2;
    
    obj1.setNumbers(num1, num2);

    obj1.showNumbers();

    return 0;
}