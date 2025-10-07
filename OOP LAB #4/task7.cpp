#include<iostream>
#include<string>
using namespace std;

// Model a complex bank account system with the class SecureBankAccount. This class must
// manage accountNumber (int), balance (double), accountType (a constant string, e.g.,
// "Current"), and *logHistory (a pointer to an integer, dynamically allocated, representing a log
// size). The Parameterized Constructor must: 1) use a Member Initializer List to initialize the
// constant accountType, 2) use the this keyword for accountNumber and balance, and 3)
// dynamically allocate memory for logHistory and initialize the value. It must also include
// simple conceptual error handling by printing an error message if the initialBalance is less
// than 500.0 PKR. Finally, the class must include a Deep Copy Constructor (allocating new
// memory for *logHistory) and a Destructor that explicitly uses delete to release the
// dynamically allocated memory.

class SecureBankAccount
{
private:
    int accountNumber;
    double balance;
    const string accountType;
    int *logHistory;

public:
    SecureBankAccount(int accountNumber, double balance, string type, int logSize)
        : accountType(type)
    {
        this->accountNumber = accountNumber;
        this->balance = balance;

        if (balance < 500.0)
        {
            cout << "Error: Initial balance cannot be less than 500 PKR!" << endl;
        }

        logHistory = new int;
        *logHistory = logSize;
    }

    SecureBankAccount(const SecureBankAccount &obj)
        : accountType(obj.accountType)
    {
        this->accountNumber = obj.accountNumber;
        this->balance = obj.balance;
        logHistory = new int;
        *logHistory = *(obj.logHistory);
    }

    void display()
    {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Balance: " << balance << " PKR" << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Log Size: " << *logHistory << endl;
        cout << "Log Memory Address: " << logHistory << endl;
    }

    ~SecureBankAccount()
    {
        cout << "Deleting log history for account " << accountNumber << "..." << endl;
        delete logHistory;
    }
};

int main()
{
    SecureBankAccount acc1(101, 1000.0, "Current", 5);
    acc1.display();

    SecureBankAccount acc2 = acc1;
    cout << "\nAfter Deep Copy:\n";
    acc2.display();

    cout << "\nOriginal Account:\n";
    acc1.display();

    cout << "\nCopied Account (independent memory):\n";
    acc2.display();

    return 0;
}
