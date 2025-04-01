/*
Function Overriding (Runtime Polymorphism with Virtual Functions)

 In the function overring we can change the containt of the function in derived class
virtual function is example for the function overriding

 */


#include<iostream>
using namespace std;

class Animal
{
    private:
        /* data */
    public:
        virtual void Sound()
        {
            cout << "Animal Makes Sound" << endl;
        }
};


class Dog : public Animal // inherit the Animal class
{
    private:
        /* data */
    public:
        // Virtual function as override
        void Sound() override  
        {
            cout << "Dog is barking " << endl;
        }
};


int main()
{
    cout << "Function Overriding" << endl;
    Dog myDog;
    Animal myAnimal;
    myAnimal.Sound();
    myDog.Sound();

}