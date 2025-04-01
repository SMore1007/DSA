#include<iostream>

using namespace std;


class MemberClass
{
    private:
        /* data */
    public:
        // Inside membe function
        void inside(void)
        {
            cout << "this is inside member function " << endl;
        }
        void outside(void);
};

// Outside member function
void MemberClass::outside(void)
{
    cout << "This is Outside Member function " << endl;
}

// main function
int main()
{
    MemberClass member; // class object
    member.inside(); // calling inside member function
    member.outside(); // calling outside member function

    return 0;
}