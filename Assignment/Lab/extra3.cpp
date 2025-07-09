/*Create a class BankAccount with data members like balance and member functions
like deposit and withdraw. Implement encapsulation by keeping the data members
private*/

#include<iostream>
using namespace std;

class Bank {
private:
    int choice, amount;
    int totalamount;
    int totalDeposit;
    int totalWithdraw;

public:
    Bank() {
        totalamount = 0;
        totalDeposit = 0;
        totalWithdraw = 0;

        cout << "\n**********************************";
        cout << "\n**                              **";
        cout << "\n**    Bank Account Application  **";
        cout << "\n**                              **";
        cout << "\n**********************************";
    }

    void display() {
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
                totalamount += amount;
                cout << "Deposit successful!\n";
            } else {
                cout << "Invalid deposit amount!";
            }
            break;

        case 2:
            cout << "\nPlease enter the amount to withdraw: ";
            cin >> amount;

            if (amount > 0 && amount <= totalamount) {
                totalWithdraw += amount;
                totalamount -= amount;
                cout << "Withdrawal successful!\n";
            } else {
                cout << "Insufficient balance or invalid amount!\n";
            }
            break;

        default:
            cout << "Invalid choice!";
        }
    }

    void showDisplay() {
        cout << "\n------- Bank Statement ---------";
        cout << "\nTotal Deposited    : " << totalDeposit;
        cout << "\nTotal Withdrawn    : " << totalWithdraw;
        cout << "\nCurrent Balance    : " << totalamount;
        cout << "\n--------------------------------\n";
    }
};

 main() {
    Bank b1;
    b1.display();       
    b1.display();      
    b1.showDisplay();  

    
}

