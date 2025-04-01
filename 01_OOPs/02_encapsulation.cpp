/*

What is Encapsulation?

Theory: Encapsulation is the bundling of data and functions that operate on the data within a single unit (class). It restricts direct access to some components, improving security.


*/

#include<iostream>
using namespace std;

class  BankAccount
{
    private:
        double balance;
    public:
        void setBalance(double b)
        {
            balance = b;
        }
        double getBalance()
        {
            return balance;
        }
};


int main()
{
    BankAccount myBanckAccount;

    myBanckAccount.setBalance(20000);
    double bankBalance = myBanckAccount.getBalance();

    cout << "Total Balance: " << bankBalance << endl;

    return 0;
}