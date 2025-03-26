#include <iostream>
using namespace std;

class Name;
class Surname;

// Function declaration with const reference to avoid unnecessary copies
void concatenate(const Name& s, const Surname& m);

class Name
{
private:
    string name;
public:
    void setName(const string& n)  // Pass by reference to avoid unnecessary copying
    {
        name = n;
    }
    
    friend void concatenate(const Name& s, const Surname& m);
};

class Surname
{
private:
    string surname;
public:
    void setSurname(const string& n) // Pass by reference to avoid unnecessary copying
    {
        surname = n;
    }
    
    friend void concatenate(const Name& s, const Surname& m);
};

// Concatenation function
void concatenate(const Name& s, const Surname& m)
{
    string fullName = s.name + " " + m.surname; // Proper string concatenation

    cout << "Full Name is: " << fullName << endl; // Print the full name
}

int main()
{
    Name S;
    Surname M;

    S.setName("Sagar");
    M.setSurname("More");

    concatenate(S, M);
    return 0;
}
