#include <iostream>  // Include standard input-output stream library
using namespace std; // Use standard namespace to avoid prefixing with std::

class Width; // Forward declaration of class Width


// Definition of class Height
class Height {
    private:
        int h;  // Private member variable to store height
    public:
        // Member function to set the value of height
        void setData(int h) {
            this->h = h;
        }

        // Friend function declaration allowing access to private members
        friend void area(Width m, Height n);
};

// Definition of class Width
class Width {
    private:
        int w;  // Private member variable to store width
    public:
        // Member function to set the value of width
        void setData(int w) {
            this->w = w;
        }

        // Friend function declaration allowing access to private members
        friend void area(Width m, Height n);
};

// Friend function definition to calculate and print the area
void area(Width m, Height n) {
    int area; // Variable to store the calculated area
    area = m.w * n.h; // Accessing private members of both classes

    cout << "Area: " << area << endl; // Printing the calculated area
}

int main() {
    Height h1; // Create an object of class Height
    Width w1;  // Create an object of class Width

    int height = 0;
    int width = 0;
    cout << "Enter the Height: " << endl;
    cin >> height;
    cout << "Enter the width: " << endl;
    cin >> width;
    h1.setData(height); // Set height value to 2
    w1.setData(width); // Set width value to 3

    area(w1, h1); // Call friend function to calculate area

    return 0; // Indicate successful program termination
}
