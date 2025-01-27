

#include <iostream>
using namespace std;

class ATM {
private:
    float balance;
    int numOfTransactions;

public:

    ATM(float initialBalance = 0.0) {
        balance = initialBalance;
        numOfTransactions = 0;
    }


    void initBalance(float amount) {
        balance = amount;
        numOfTransactions = 0;
    }

    //Display balance
    void showBalance() const {
        cout << "Current Balance: $" << balance << endl;
    }

    // Deposit money
    void deposit(float amount) {
        balance += amount;
        numOfTransactions++;
    }

    // Withdraw money
    bool withdraw(float amount) {
        if (balance >= amount) {
            balance -= amount;
            numOfTransactions++;
            return true;
        } else {
            return false;
        }
    }

    // Get the number of transactions
    int getTransactions() const {
        return numOfTransactions;
    }
};

int main() {
    // Create object
    ATM atm_obj;
    atm_obj.initBalance(250.0);

    //Show Balance
    atm_obj.showBalance(); // Should show $250

    //Deposit
    atm_obj.deposit(250.0);

    // Show Balance
    atm_obj.showBalance(); // Should show $500

    //  Withdraw $100
    if (atm_obj.withdraw(100.0)) {
        cout << "Please take cash. Remaining balance:";
        atm_obj.showBalance(); // Should show $400
    } else {
        cout << "Not enough money." << endl;
        atm_obj.showBalance();
    }


    cout << "Total Transactions: " << atm_obj.getTransactions() << endl;

    return 0;
}
