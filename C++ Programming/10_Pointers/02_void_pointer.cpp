#include<iostream>

using namespace std;


void printNo(int *pNumber)
{
    cout << *pNumber << endl;
}


void printChr(char *pChr)
{
    cout << *pChr << endl;
}

void print(void *ptr, char type)
{
    switch (type)
    {
        case 'i':  // handle int
            cout << *((int*)ptr) << endl;
            break;
        case 'c':  // handle char
            cout << * ((char *) ptr) << endl;
            break;
        default:
            break;
    }
}
int main()
{
    int number  = 5;
    char letter = 'A';

    // printNo(&number);
    // printChr(&letter);
    print(&number, 'i');
    print(&letter, 'c');

    return 0;

}