/* Person -> Student -> DiplomaStudent */

#include<iostream>
using namespace std;

// Parent 1
class  Person
{
    private:
        /* data */
    public:
        string name;
        int age;
        
        
    Person()
    {
        cout << "parent class 1 constructor" << endl;
    }
    ~Person()
    {
        cout << "parent class 1 Destructor" << endl;
    }
};

// parent 2
class Student : public Person
{
    private:
        /* data */
    public:

        int rollNo;
    Student()
    {
        cout << "parent class 2 constructor" << endl;
    }
    ~Student()
    {
        cout << "parent class 2 Destructor" << endl;
    }
};

// child / Derived class
class DiploaStudent : public Student
{
    private:
        /* data */
    public:
        string reserachTopic;

    DiploaStudent()
    {
        cout << "Child class constructor" << endl;
    }

    ~DiploaStudent()
    {
        cout << "Child class Destructor" << endl;
    }
};


int main()
{
    // Creating the derived class object

    DiploaStudent d1;

    d1.name = "Sagar"; // from parent class 1
    d1.age = 23;

    d1.rollNo = 20;  // From parent class 2

    d1.reserachTopic = "Embedded System";

    cout << "----------------------------------\nInformation........." << endl;

    cout <<"Name from Parent Class 1:        " << d1.name << endl;
    cout <<"Age from Parent class 1:         " << d1.age << endl;
    cout <<"Roll No from Parent class 2:     " << d1.rollNo << endl;
    cout <<"Research Topic from child class: " << d1.reserachTopic << endl;
    cout << "----------------------------------" << endl;

    return 0;
}