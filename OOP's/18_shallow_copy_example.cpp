#include<iostream>
#include<cstring>
using namespace std;

class ShallowCopyExample
{
    private:

    char * name;

    public:
    // Constructor
    ShallowCopyExample(const char *inputName)
    {
        this->name = new char[strlen(inputName) + 1]; // Allocate Memory
        strcpy(name, inputName); // Copy the string
    }

    // Copy constructor (shallow copy)
    ShallowCopyExample(const ShallowCopyExample &obj)
    {
        this->name = obj.name;  // Copy only pointer, not the data
    }

    // Display function
    void show()
    {
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~ShallowCopyExample()
    {
        delete[] name;  // free allocated memory
    }
};


int main()
{
    ShallowCopyExample obj1("Embedded");
    ShallowCopyExample obj2 = obj1;   // shallow copy happens here
    cout << "Object 1: ";
    obj1.show();
    cout << "Object 2: ";
    obj2.show();
    return 0;
}