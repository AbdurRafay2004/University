/*
    Problem: Mkash Account Management
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

class Account
{
private:
    static int numberOfAccounts;
    int accountNumber, balance, accountSerial;
    string accountHolder;

public:
    Account(const int &accountNumber, const string &accountHolder) : accountNumber(accountNumber), accountHolder(accountHolder), balance(0)
    {
        numberOfAccounts++;
        accountSerial = numberOfAccounts;
        cout << "Account " << accountSerial << " created with balance " << balance << endl;
    }
    Account(const int &accountNumber, const string &accountHolder, const int &balance) : accountNumber(accountNumber), accountHolder(accountHolder), balance(balance)
    {
        numberOfAccounts++;
        accountSerial = numberOfAccounts;
        cout << "Account " << accountSerial << " created with balance " << balance << endl;
    }

    void set_deposit(int amount)
    {
        balance += amount;
        cout << "Deposit " << accountSerial << " : " << amount << ". ";
        cout << "New balance: " << balance << endl;
    }
    void set_withdraw(int amount)
    {
        balance -= amount;
        cout << "Withdrawal " << accountSerial << " : " << amount << ". ";
        cout << "New balance: " << balance << endl;
    }
};

// bank account counter
int Account::numberOfAccounts = 0; // ClassName::staticVariable

int main()
{
    Account acc1(1001, "jesika");
    Account acc2(1002, "jesi", 5000);

    acc2.set_deposit(1000);
    acc2.set_withdraw(3000);

    acc1.set_deposit(15000);
    acc1.set_withdraw(5000);

    return 0;
}