//  Ronald Woods
//  CS310 - T301
//  11/04/2025
//  Chapter 11, Programming Exercise 21 - Banking Program

#include <iostream>
#include <iomanip>
using namespace std;

// ======================== Base Class =========================
class bankAccount {
protected:
    int accountNumber;
    double balance;

public:
    bankAccount() : accountNumber(0), balance(0.0) {}
    bankAccount(int acctNo, double openingBalance)
        : accountNumber(acctNo), balance(openingBalance) {
    }

    void setAccountNumber(int acctNo) { accountNumber = acctNo; }
    int getAccountNumber() const { return accountNumber; }
    double getBalance() const { return balance; }

    virtual void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    virtual bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    virtual void print() const {
        cout << "Account Number: " << accountNumber
            << " | Balance: $" << fixed << setprecision(2) << balance;
    }
};

// ==================== Checking Account =======================
class checkingAccount : public bankAccount {
private:
    double interestRate;
    double minimumBalance;
    double serviceCharges;

public:
    checkingAccount()
        : bankAccount(), interestRate(0.0), minimumBalance(0.0), serviceCharges(0.0) {
    }

    checkingAccount(int acctNo, double openingBalance,
        double rate, double minBal, double svc)
        : bankAccount(acctNo, openingBalance),
        interestRate(rate), minimumBalance(minBal), serviceCharges(svc) {
    }

    void postInterest() {
        if (balance >= minimumBalance) {
            double monthlyRate = interestRate / 12.0;
            balance += balance * monthlyRate;
        }
    }

    bool isBelowMinimum() const {
        return balance < minimumBalance;
    }

    bool withdraw(double amount) override {
        if (bankAccount::withdraw(amount)) {
            if (isBelowMinimum() && serviceCharges <= balance) {
                balance -= serviceCharges;
            }
            return true;
        }
        return false;
    }

    void print() const override {
        cout << "[Checking] ";
        bankAccount::print();
        cout << " | Interest: " << interestRate * 100 << "%"
            << " | MinBal: $" << minimumBalance
            << " | ServiceCharge: $" << serviceCharges;
    }
};

// ===================== Savings Account =======================
class savingsAccount : public bankAccount {
private:
    double interestRate;

public:
    savingsAccount() : bankAccount(), interestRate(0.0) {}
    savingsAccount(int acctNo, double openingBalance, double rate)
        : bankAccount(acctNo, openingBalance), interestRate(rate) {
    }

    void postInterest() {
        double monthlyRate = interestRate / 12.0;
        balance += balance * monthlyRate;
    }

    bool withdraw(double amount) override {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    void print() const override {
        cout << "[Savings] ";
        bankAccount::print();
        cout << " | Interest: " << interestRate * 100 << "%";
    }
};

// ============================= Main ==========================
int main() {
    checkingAccount chk(1001, 500.00, 0.03, 300.00, 10.00);
    savingsAccount sav(2001, 1000.00, 0.02);

    int choice;
    double amount;

    do {
        cout << "\n===== BANK MENU =====\n";
        cout << "1. Deposit to Checking\n";
        cout << "2. Withdraw from Checking\n";
        cout << "3. Deposit to Savings\n";
        cout << "4. Withdraw from Savings\n";
        cout << "5. Print Account Info\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter deposit amount: ";
            cin >> amount;
            chk.deposit(amount);
            break;

        case 2:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (!chk.withdraw(amount))
                cout << "Withdrawal failed.\n";
            break;

        case 3:
            cout << "Enter deposit amount: ";
            cin >> amount;
            sav.deposit(amount);
            break;

        case 4:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (!sav.withdraw(amount))
                cout << "Withdrawal failed.\n";
            break;

        case 5:
            chk.print(); cout << endl;
            sav.print(); cout << endl;
            break;

        case 6:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}

