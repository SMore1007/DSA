#include<iostream>
#include<string.h>
#include<stdbool.h>

using namespace std;
bool printFlag = false;
    
class Person
{
    private:

    public:
        string name;
        int age;
};

 class Student : public Person  // Inherit the properties of Person class into Student class
 {
    private:
    /* Add Private artibutes and methods*/

    public:
        int rolNo;

        // setter function
        void setInfo(string name, int age, int rolNo)
        {
            this->name = name;
            this->age = age;
            this->rolNo = rolNo;
        }
        
        // getter function
        void getInfo()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll No: " << rolNo << endl;
        }
 };

 int main()
 {
    int n = 0;
    cout << "Enter number of students: " << endl;

    cin >> n;

    Student s[n]; // Creating student objects

    cout << "Enter student Information: " << endl;
    for (int i = 0; i < n; i++)
    {
        string Name = "";
        cout << "Enter Name of Student: " << i+1 << endl;
        cin >> Name;
        s[i].name = Name;
        cout << "Enter Age of " << s[i].name << ". " << endl;
        cin >> s[i].age;

        cout << "Enter Roll Number of " << s[i].name << ". " << endl;
        cin >> s[i].rolNo;
    }
    
    cout << " Do yoy want to print the student information on cosole ?\nEnter 1 for Yes & 0 for No" << endl;

    cin >> printFlag;

    if (printFlag)
    {
        cout << "-----------------------------------------------" << endl;
        cout << "Student Information as per following " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Student Number: " << i+1 << endl;
            cout << "Name:    " << s[i].name <<endl;
            cout << "Roll No: " << s[i].rolNo << endl;
            cout << "Age:     " << s[i].age << endl;
        }
    }
    else{
        cout << "Ok I am not showing student information right now" << endl;
        cout << "Bye.........................." << endl;
    }
    return 0;
 }