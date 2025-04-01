#include<iostream>

using namespace std;


class Student
{
    private:
        char Name[20];
        int rollNo;
    public:

        void studentData()
        {
            cout << "Enter Name: ";
            cin >> Name ;
            cout << "Enter Roll Number: ";
            cin >> rollNo;
        }

        void showStudetInfo()
        {
            cout << "Name: " << Name << endl;
            cout << "Roll Number: " << rollNo << endl; 
        }
};

int main()
{
    Student s1, s2;
    cout << endl << "Student 1: " << endl;
    s1.studentData();
    s1.showStudetInfo();
    cout << endl << "Student 2: " << endl;
    s2.studentData();
    s2.showStudetInfo();

    return 0;
}