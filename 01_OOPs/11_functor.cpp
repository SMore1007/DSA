// A functor in C++ is an object that can be called like a function. 
// This is achieved by overloading the operator()

#include <iostream>
using namespace std;

class MultiplyBy {
    int factor;
public:
    MultiplyBy(int f) : factor(f) {}  // Constructor

    int operator()(int num) const {
        return num * factor;
    }
};

int main() {
    MultiplyBy timesThree(3); // Functor instance
    cout << timesThree(5) << endl;  // Output: 15
}