#include <iostream>
using namespace std;

class ATM {
public:
    float balance;  // Public member for balance

    // Function to display the current balance
    void showBalance() {
        cout << "Current Balance: $" << balance << endl;
    }

    // Function to deposit an amount into the account
    void deposit(float amount) {
        balance += amount;
    }

    // Function to withdraw an amount from the account
    bool withdraw(float amount) {
        if (amount > balance) {
            return false;
        } else {
            balance -= amount;
            return true;
        }
    }
};

int main() {
    ATM atm_obj;
    atm_obj.balance = 250;
    atm_obj.showBalance();
    atm_obj.deposit(250);
    atm_obj.showBalance();
    atm_obj.balance += 250;
    atm_obj.showBalance();


    if (atm_obj.withdraw(100)) {
        cout << "Withdrawal successful!" << endl;
    } else {
        cout << "Withdrawal failed: Insufficient balance!" << endl;
    }


    atm_obj.showBalance();

    return 0;
}
