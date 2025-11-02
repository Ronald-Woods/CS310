//  Ronald Woods
//  CS310 - T301
//  11/2/2025
//  Bank Account Program - Chapter 08 - Programming Exercise 10

#include <iostream>
#include <string>
using namespace std;

class bankAccount {
private:
    string name;
    int accountNumber;
    string accountType;
    double balance;
    double interestRate;

    // static member initialized right here
    static int nextAccountNumber;

public:
    // Default constructor
    bankAccount() {
        name = "";
        accountType = "";
        balance = 0.0;
        interestRate = 0.0;

        nextAccountNumber++;          // increase number each time
        accountNumber = nextAccountNumber;
    }

    void setAccountInfo(string fullName, string type, double bal, double rate) {
        name = fullName;
        accountType = type;
        balance = bal;
        interestRate = rate;
    }

    void display() const {
        cout << "--------------------------\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Interest Rate: " << interestRate << endl;
    }
};

// Initialize static member inside the class (modern C++)
int bankAccount::nextAccountNumber = 1000;

int main() {
    bankAccount customers[10];
    int numAccounts;

    cout << "How many accounts would you like to enter? (up to 10): ";
    cin >> numAccounts;

    if (numAccounts > 10) {
        numAccounts = 10;
    }

    string first, last, type;
    double bal, rate;

    for (int i = 0; i < numAccounts; i++) {
        cout << "\nEnter information for account " << (i + 1) << ":\n";

        cout << "First name: ";
        cin >> first;

        cout << "Last name: ";
        cin >> last;

        string fullName = first + " " + last;

        cout << "Account Type (checking/saving): ";
        cin >> type;

        cout << "Balance: ";
        cin >> bal;

        cout << "Interest Rate (decimal, like 0.03): ";
        cin >> rate;

        customers[i].setAccountInfo(fullName, type, bal, rate);
    }

    cout << "\nAccount Information:\n";
    for (int i = 0; i < numAccounts; i++) {
        customers[i].display();
    }

    return 0;
}
