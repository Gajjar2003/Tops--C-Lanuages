#include <iostream>
using namespace std;

class Bank {
private:
    int amount;
    int totalAmount;
    int totalDeposit;
    int totalWithdraw;

public:
    Bank() {
        totalAmount = 0;
        totalDeposit = 0;
        totalWithdraw = 0;

        cout << "\n**********************************";
        cout << "\n**                              **";
        cout << "\n**    Bank Account Application  **";
        cout << "\n**                              **";
        cout << "\n**********************************";
    }

    void display() {
        int choice;
        char y;

        do {
            cout << "\n\nPress 1 to Deposit";
            cout << "\nPress 2 to Withdraw";

            cout << "\n\nPlease Enter your choice (1-2): ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "\nPlease enter the amount to deposit: ";
                    cin >> amount;
                    if (amount > 0) {
                        totalDeposit += amount;
                        totalAmount += amount;
                        cout << "Deposit successful!\n";
                    } else {
                        cout << "Invalid deposit amount!";
                    }
                    break;

                case 2:
                    cout << "\nPlease enter the amount to withdraw: ";
                    cin >> amount;
                    if (amount > 0 && amount <= totalAmount) {
                        totalWithdraw += amount;
                        totalAmount -= amount;
                        cout << "Withdrawal successful!\n";
                    } else {
                        cout << "Insufficient balance or invalid amount!\n";
                    }
                    break;

                default:
                    cout << "Invalid choice!";
            }

            cout << "\nDo you want to perform another transaction? (Y/N): ";
            cin >> y;

        } while (y == 'y' || y == 'Y');
    }

    void showDisplay() {
        cout << "\n------- Bank Statement ---------";
        cout << "\nTotal Deposited    : " << totalDeposit;
        cout << "\nTotal Withdrawn    : " << totalWithdraw;
        cout << "\nCurrent Balance    : " << totalAmount;
        cout << "\n--------------------------------\n";
    }
};

 main() {
    Bank b1;
    b1.display();
    b1.showDisplay();


}

