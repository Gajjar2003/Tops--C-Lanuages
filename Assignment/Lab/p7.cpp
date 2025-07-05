/*Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
operators. Perform operations using each type of operator and display the results */

#include<iostream>
using  namespace std;

 main() {
    int a = 10, b = 5;
    

   
    cout << "Arithmetic Operators:";
    cout << "\na + b = " << (a + b) ;
    cout << "\na - b = " << (a - b);
    cout << "\na * b = " << (a * b);
    cout << "\na / b = " << (a / b) ;
    cout << "\na % b = " << (a % b);

   
    cout << "\nRelational Operators:" ;
    cout << "\na == b: " << (a == b) ;
    cout << "\na != b: " << (a != b) ;
    cout << "\na > b: " << (a > b) ;
    cout << "\na < b: " << (a < b) ;
    cout << "\na >= b: " << (a >= b) ;
    cout << "\na <= b: " << (a <= b) ;

 
    cout << "\nLogical Operators:" ;
    cout << "\na && b: " << (a && b);
    cout << "\na || b: " << (a || b) ;
    cout << "\n!a: " << (!a)  ;

   
    cout << "\nBitwise Operators:" ;
    cout << "\na & b: " << (a & b)  ;
    cout << "\na | b: " << (a | b) ;
    cout << "\na ^ b: " << (a ^ b) ;
    cout << "\n~a: " << (~a) ;
    cout << "\na << 1: " << (a << 1) ;
    cout << "\na >> 1: " << (a >> 1) ;

}


