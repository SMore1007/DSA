#include <iostream>
#include <cstring>

class DeepCopyExample {
private:
    char* name;

public:
    // Constructor
    DeepCopyExample(const char* inputName) {
        name = new char[strlen(inputName) + 1];  // Allocate new memory
        strcpy(name, inputName);  // Copy the string
    }

    // Copy Constructor (Deep Copy)
    DeepCopyExample(const DeepCopyExample& obj) {
        name = new char[strlen(obj.name) + 1];  // Allocate new memory
        strcpy(name, obj.name);  // Copy the data
    }

    // Display Function
    void show() {
        std::cout << "Name: " << name << std::endl;
    }

    // Destructor
    ~DeepCopyExample() {
        delete[] name;  // Free allocated memory
    }
};

int main() {
    DeepCopyExample obj1("Embedded");
    DeepCopyExample obj2 = obj1;  // Deep Copy happens here

    std::cout << "Object 1: ";
    obj1.show();
    std::cout << "Object 2: ";
    obj2.show();

    return 0;
}
