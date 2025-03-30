/*

shared_ptr (Shared Ownership)

    Allows multiple shared pointers to share ownership of the same object.

    Keeps a reference count; when the last shared_ptr goes out of scope, the object is deleted.

    Supports copying.

*/

#include<iostream>
#include<memory>

using namespace std;

class SharedPointer
{
private:
    /* data */
public:
    SharedPointer()
    {
        cout << "Constructor called" << endl;
    }
    ~SharedPointer()
    {
        cout << "destructor called" << endl;
    }
};



int main()
{
    shared_ptr<SharedPointer> ptr = make_shared<SharedPointer>();

    {
        shared_ptr<SharedPointer> ptr2 = ptr; // copying the ptr1 to ptr2
        cout << "Inside Block\n";
    }
    cout << "Outside Block\n";
}