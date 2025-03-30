#include<iostream>
#include<memory>

using namespace std;

class SmartPointer
{
    private:
        int *ptr; // actual pointer

    public:

        // class constructor
        explicit SmartPointer()
        {
            cout << "Constructor called" << endl;
        }
        // class destructor

        ~SmartPointer()
        {
            cout << "Destrcutor called" << endl;
        }

        // Overloading dereferencing operator
        int &operator*()
        {
            return *ptr;
        }
};

int main()
{
    // Make unique pointer
    unique_ptr<SmartPointer> ptr = make_unique<SmartPointer>();
    
    return 0;
}