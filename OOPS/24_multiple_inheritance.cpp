#include <iostream>
#include <vector>

using namespace std;

// Base class
class Person
{
public:
    string name;
    int age;

    // Virtual function for displaying details (Polymorphism)
    virtual void displayInfo() = 0;
};

// Derived class for Students
class Student : public Person
{
public:
    int rollno;

    void displayInfo() override
    {
        cout << "Student Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Roll Number: " << rollno << "\n";
    }
};

// Derived class for Teachers
class Teacher : public Person
{
public:
    string subject;

    void displayInfo() override
    {
        cout << "Teacher Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Subject: " << subject << "\n";
    }
};

int main()
{
    int n;
    cout << "Enter the total People count in EXTC Department: ";
    cin >> n;
    cin.ignore(); // Prevent getline() issues

    vector<Person*> EXTC_FirstYear;
    int TeacherCount = 0, StudentCount = 0;

    for (int i = 0; i < n; i++)
    {
        bool isStudent;
        cout << "Enter 1 for Student and 0 for Teacher: ";
        cin >> isStudent;
        cin.ignore();

        if (isStudent)
        {
            Student* s = new Student();
            cout << "\nEnter Student Information\n";
            cout << "-----------------------------\n";
            cout << "Enter Name: ";
            getline(cin, s->name);
            cout << "Enter Age: ";
            cin >> s->age;
            cout << "Enter Roll Number: ";
            cin >> s->rollno;
            cin.ignore(); 

            EXTC_FirstYear.push_back(s);
            StudentCount++;
        }
        else
        {
            Teacher* t = new Teacher();
            cout << "\nEnter Teacher Information\n";
            cout << "-----------------------------\n";
            cout << "Enter Name: ";
            getline(cin, t->name);
            cout << "Enter Age: ";
            cin >> t->age;
            cin.ignore(); 
            cout << "Enter Subject: ";
            getline(cin, t->subject);

            EXTC_FirstYear.push_back(t);
            TeacherCount++;
        }
    }
cout << "\n________________________________________________________________" << endl;
    cout << "\nTotal Teachers in EXTC Department: " << TeacherCount << endl;
    cout << "Total Students in EXTC Department: " << StudentCount << endl;

    // Display all stored information
    cout << "\nDisplaying Information:\n";
    cout << "------------------------\n";
    for (auto person : EXTC_FirstYear)
    {
        person->displayInfo();
        cout << "------------------------\n";
    }

    // Clean up dynamically allocated memory
    for (auto person : EXTC_FirstYear)
        delete person;

    return 0;
}