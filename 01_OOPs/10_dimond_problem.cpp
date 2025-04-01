#include <iostream>
using namespace std;

// Base class
class A {
public:
    void show() {
        cout << "This is Class A" << endl;
    }
};

// Derived classes using virtual inheritance
class B : virtual public A {};
class C : virtual public A {};

// Class D inherits from both B and C
class D : public B, public C {};

int main() {
    D obj;
    obj.show(); // Output: This is Class A

    return 0;
}
