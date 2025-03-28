#include<iostream>
using namespace std;


class Student
{
    private:
        string name;
        int age;
    public:

        void show(string nam)
        {
            name = nam;
            cout << "name: " << name << endl;
        }

        void show(int n)
        {
            age = n;
            cout << "Age: " << age << endl;
        }
};


int main()
{
    Student s1;

    s1.show("Sagar"); // It goes to name

    s1.show(23); // it goes ti age

    return 0;
}