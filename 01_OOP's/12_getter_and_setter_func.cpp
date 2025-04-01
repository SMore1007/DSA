#include<iostream>
using namespace std;


class Student
{
    private:
        string name;
        int age;
    public:
        void setStudentData(string name, int age)
        {
            this->name = name;
            this->age = age;
        }

        void getstudentData()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};


int main()
{
    int n;
    cout << "Enter Number of Student: " << endl;
    cin >> n;
    Student student[n]; // 10 student objects

    cout << "Setting the information of Student " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student number: "<< i+1 << endl;
        string Name;
        int Age;
        cout << "Name: ";
        cin >> Name;
        cout << "Age: ";
        cin >> Age;
        student[i].setStudentData(Name, Age);
    }
    
    // print the student data

    cout << "Getting the information of Student" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student number: "<< i+1 << endl;
        student[i].getstudentData();
    }

    return 0;
}

