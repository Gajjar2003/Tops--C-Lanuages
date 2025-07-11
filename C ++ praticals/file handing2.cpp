#include<iostream>
#include<fstream>
using namespace std;

 main()
{
    char product_name[20];
    float price;
    char ch;

    fstream f1;
    f1.open("product.csv", ios::out);

    if (!f1) {
        cout << "File could not be created!" << endl;
        return 1;
    }

    f1 << "Product Name, Price\n";  

    for (int i = 1; i <= 3; i++) {
        cout << "Enter your product name and price: ";
        cin >> product_name >> price;
        f1 << product_name << "," << price << "\n";
    }
    f1.close();

   
    f1.open("product.csv", ios::in);
    if (!f1) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    while (f1.get(ch)) {
        if (ch == ',') {
            cout << "\t";
            continue;
        }
        cout << ch;
    }
    f1.close();

   
}

