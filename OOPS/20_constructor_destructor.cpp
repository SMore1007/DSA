#include <iostream>
using namespace std;

class MyClass {

    private:
    /*Properties and methods*/
    public:
        // Constructor
        MyClass() {
            cout << "Constructor called!" << endl;
        }

        // Destructor
        ~MyClass() {
            cout << "Destructor called!" << endl;
        }
};

int main() {
    MyClass obj; // Constructor is called here
    return 0; // Destructor is called automatically when obj goes out of scope
}
