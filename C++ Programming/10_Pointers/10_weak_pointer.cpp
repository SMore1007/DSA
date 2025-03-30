#include <iostream>
#include <memory>

class Example {
public:
    Example() { std::cout << "Constructor Called\n"; }
    ~Example() { std::cout << "Destructor Called\n"; }
};

int main() {
    std::shared_ptr<Example> shared = std::make_shared<Example>(); // Reference count = 1
    std::weak_ptr<Example> weak = shared; // Does NOT increase reference count

    if (auto ptr = weak.lock()) { // Convert weak_ptr to shared_ptr if object exists
        std::cout << "Object is still alive\n";
    } else {
        std::cout << "Object is destroyed\n";
    }

    return 0;
} // Object destroyed when shared goes out of scope (Reference count = 0)
