#include<iostream>
using namespace std;

class BaseClass {
    public:
        int baseVar;
        void baseFunction() 
        {
            cout << "Base class function" << endl;
        }
};
    
class DerivedClass : public BaseClass {  // Derived class inherits BaseClass
public:
    void derivedFunction() 
    {
        cout << "Derived class function" << endl;
    }
};
    
int main()
{
    DerivedClass d1;

    d1.baseFunction();
    d1.derivedFunction();
    d1.baseVar = 10;

    cout << "Base var Vlaue: " << d1.baseVar << endl;

    return 0;
}