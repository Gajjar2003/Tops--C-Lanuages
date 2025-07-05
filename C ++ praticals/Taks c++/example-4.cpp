#include<iostream>
using namespace std;

class bank {
private:
    int savingacc , currentacc ;
    float totalamount ;
    int choice;

public:
    
    bank() {
        cout << "Enter your bank details";
        cout << "\nPress 1 for Saving Account";
        cout << "\nPress 2 for Current Account";

        cout << "\nPlease Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Saving Account Balance: ";
                cin >> savingacc;
                totalamount = savingacc * 1.5;
                cout << "The final amount in Saving Account = " << totalamount;
                break;

            case 2:
                cout << "Enter Current Account Balance: ";
                cin >> currentacc;
                totalamount = currentacc * 2.5;
                cout << "The final amount in Current Account = " << totalamount;
                break;

            default:
                cout << "Invalid choice!";
                break;
        }
    }

  
    void display() {
        cout << "\n\nYour entered details:";
        cout << "\nSaving Account = " << savingacc;
        cout << "\nCurrent Account = " << currentacc;
        cout << "\nFinal Amount = " << totalamount ;
    }
};


int main() {
    bank b1;
    b1.display();
   
}

