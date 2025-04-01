#include <iostream>
using namespace std;

// Base Class 1
class A {
public:
    void displayA() {
        cout << "This is Class A" << endl;
    }
};

// Base Class 2
class B {
public:
    void displayB() {
        cout << "This is Class B" << endl;
    }
};

// Derived Class (inherits from both A and B)
class C : public A, public B {
public:
    void displayC() {
        cout << "This is Class C" << endl;
    }
};

int main() {
    C obj;
    obj.displayA(); // Output: This is Class A
    obj.displayB(); // Output: This is Class B
    obj.displayC(); // Output: This is Class C

    return 0;
}
