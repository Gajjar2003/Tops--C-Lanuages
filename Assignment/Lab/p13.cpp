/* Write a C++ program that calculates the factorial of a number using recursion*/

#include <iostream>
using namespace std;


int factorial(int n) {
    if (n == 0 || n == 1)  
        return 1;
    else
        return n * factorial(n - 1); 
}

int main() {
    int number;

  
    cout << "Enter a number to find its factorial: ";
    cin >> number;

    
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(number);
        cout << "Factorial of " << number << " is: " << result << endl;
    }

    
}

