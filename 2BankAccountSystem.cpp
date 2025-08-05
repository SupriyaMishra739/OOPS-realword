#include <iostream>
using namespace std;

class BankAccount
{

public:
    int accNo, balance;
    string accHolderName;

    // default constructor
    BankAccount()
    {
        accNo = 0;
        balance = 0;
        accHolderName = "";
    }
    BankAccount(int a, int b, string n)
    {
        accNo = a;
        balance = b;
        accHolderName = n;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Your current Balance is: " << balance << endl;
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0 && balance > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Your current Balance is: " << balance << endl;
        }
    }

    void displaybalance()
    {
        cout << "Your current Balance is: " << balance << endl;
    }
};

int main()
{
    BankAccount b1(1, 100, "bella");
    b1.deposit(100);
    b1.displaybalance();
    b1.withdraw(50);

    cout << endl;

    BankAccount b2;
    b2.accNo = 2;
    b2.accHolderName = "missi";
    b2.deposit(100);
    b2.displaybalance();
    b2.withdraw(50);

    // dynamic allocation
    cout << endl;
    BankAccount *b3 = new BankAccount;
    b3->balance = 1000;
    b3->accHolderName = "chuza";
    b3->accNo = 3;
    b3->displaybalance();
    b3->withdraw(200);
    b3->deposit(1000);

    delete b3;
}