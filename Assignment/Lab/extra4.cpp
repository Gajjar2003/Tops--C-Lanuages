#include <iostream>
using namespace std;

class Food {
private:
    int total = 0;
    int userChoice, quantity;
    char y;

public:
    void bill() {
        do {
            cout << "-------- Food Billing System ----";
            cout << "\n Press 1: Pizza\t Price = 180";
            cout << "\n Press 2: Burger\t Price = 100";
            cout << "\n Press 3: Tea\t Price = 10";
            cout << "\n Press 4: Coffee\t Price = 180";
            cout << "\n Press 5: KFC\t Price = 1000";

            cout << "\nPlease enter your choice: ";
            cin >> userChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            switch (userChoice) {
                case 1:
                    cout << "Your choice is Pizza\n";
                    total += 180 * quantity;
                    break;
                case 2:
                    cout << "Your choice is Burger\n";
                    total += 100 * quantity;
                    break;
                case 3:
                    cout << "Your choice is Tea\n";
                    total += 10 * quantity;
                    break;
                case 4:
                    cout << "Your choice is Coffee\n";
                    total += 180 * quantity;
                    break;
                case 5:
                    cout << "Your choice is KFC\n";
                    total += 1000 * quantity;
                    break;
                default:
                    cout << "Invalid choice!\n";
            }

            cout << "Current total amount: " << total << endl;
            cout << "Do you want to add more items? (Y/N): ";
            cin >> y;

        } while (y == 'y' || y == 'Y');
    }

    void display() {
        cout << "\nYour total bill amount is: " << total << endl;
        cout << "Thank you for ordering!\n";
    }
};

 main() {
    Food f1;
    f1.bill();
    f1.display();
    
}

