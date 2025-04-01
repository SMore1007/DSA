#include <iostream>
using namespace std;


class TestMax
{
    private:
        int val1, val2;
    public:
        void getValue()
        {
            cout << " Enter value 1: "<< endl;
            cin >>val1;
            cout << "Enter Value 2: " << endl;
            cin >> val2;
        }

        void checkMax()
        {
            if(val1 > val2)
            {
                cout << val1 << " is max" << endl;
            }
            else
            {
                cout << val2 << " is max" << endl;
            }
        }
};

int main()
{
    TestMax _firstText;

    _firstText.getValue();
    _firstText.checkMax();

    return 0;
}