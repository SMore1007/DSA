#include <iostream>
#include <string.h>

using namespace std;

class StringFunc {
    private:
    char Name[50]; // Increased size to prevent overflow
    public:
    void concatStr(char a[], char b[]) {
        int i = 0, j = 0;

        // Copy first string into Name
        while (a[i] != '\0') {
            Name[i] = a[i];
            i++;
        }

        // Copy second string into Name after first
        int m = 0;
        while (b[m] != '\0') {
            Name[i] = b[m];
            i++;
            m++;
        }

        // Null-terminate the concatenated string
        Name[i] = '\0';
    }
    void showString();void showString() {
        cout << "Concatenated String: " << Name << endl;
    }
    
};


int main() {
    StringFunc s1;

    char name[] = "Sagar";
    char surname[] = " More";

    s1.concatStr(name, surname);
    s1.showString(); // Call the function to display the result

    return 0;
}
