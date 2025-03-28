#include<iostream>
using namespace std;

class Student
{
    private:

    public:
        string name;

    // non parameterised constructor
    Student()
    {
        cout << "Non parameteised constructor" << endl;
    }

    // parameterised constructor
    Student(string name)
    {
        this->name = name;
        cout << "parameteised constructor" << endl;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{
    /* Object of student class*/

    Student s1("Sagar");
    Student s2;
    s1.getInfo();

    s2.name = "Anand";
    s2.getInfo();
    return 0;
}