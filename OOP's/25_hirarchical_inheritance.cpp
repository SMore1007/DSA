#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

// Derived class 1
class Student : public Person {
public:
    int rollNo;

    void setStudentDetails(int r) {
        rollNo = r;
    }

    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Derived class 2
class Teacher : public Person {
public:
    string subject;

    void setTeacherDetails(string sub) {
        subject = sub;
    }

    void displayTeacherDetails() {
        displayPersonDetails();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Creating Student object
    Student s1;
    s1.setPersonDetails("Rahul", 20);
    s1.setStudentDetails(101);
    
    cout << "Student Details:\n";
    s1.displayStudentDetails();
    cout << "----------------------\n";

    // Creating Teacher object
    Teacher t1;
    t1.setPersonDetails("Dr. Sharma", 45);
    t1.setTeacherDetails("Mathematics");

    cout << "Teacher Details:\n";
    t1.displayTeacherDetails();

    return 0;
}
