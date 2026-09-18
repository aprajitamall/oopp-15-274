#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accNo;
    string name;
    double balance;

public:
    void input()
    {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount Deposited Successfully." << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully." << endl;
        }
        else
        {
            cout << "Insufficient Balance." << endl;
        }
    }

    void display()
    {
        cout << "\nAccount Number : " << accNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.input();

    b.deposit(900);
    b.withdraw(500);

    b.display();

    return 0;
}