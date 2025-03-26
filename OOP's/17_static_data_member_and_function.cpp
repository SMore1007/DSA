#include <iostream>
using namespace std;

class stat {
private:
    int code;
    static int count; // Static member declaration

public:
    stat() // Constructor
    {
        code = ++count;
    }

    void showCode() {
        cout << "Object Number is: " << code << endl;
    }

    static void showCount() { // Static function definition
        cout << "\nCount Object: " << count << endl;
    }
};

// Define static data member outside the class
int stat::count = 0;

int main() {
    stat obj1, obj2; // Creating two objects

    obj1.showCode();
    stat::showCount(); // Call static function using class name

    obj2.showCode();
    stat::showCount(); // Call again

    return 0;
}
