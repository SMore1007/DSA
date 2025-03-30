/*

unique_ptr (Exclusive Ownership)

    Ensures only one owner for the allocated memory.

    When the unique_ptr goes out of scope, the object is deleted automatically.

    It cannot be copied (copy constructor is deleted).

    Can be moved using std::move().
*/


#include<iostream>
#include<memory>
using namespace std;


int main()
{
    unique_ptr<int> ptr1 = make_unique<int> (600); // assign value to a unique pointer

    unique_ptr<int> ptr2 = move(ptr1);  // Moving ownership of ptr1 to ptr2, can not access ptr1 afting moving to ptr2
    cout <<"ptr1 addr: " << &ptr1 << endl;
    cout << "ptr2 addr: " << &ptr2 << endl;

    cout <<"ptr1: " << *ptr1 << endl;
    cout << "ptr2: " << *ptr2 << endl;

    return 0;
}