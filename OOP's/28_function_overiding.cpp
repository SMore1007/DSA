#include<iostream>
using namespace std;


class Person
{
    private:
        int age;
        string name;
    public:
    void setInfor(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person  // inheritance
{
    private:
        string brach;
    public:

    void setInfor(string branch)
    {
        this->brach = brach;
    }
    void show()
    {
        cout << "Branch: " << brach << endl;
    }
};


int main()
{
    Student s1;
    Person p1;

    p1.setInfor("Sagar", 23);
    s1.setInfor("EXTC");
    p1.show();
    s1.show();

}