/*Write a program that demonstrates the difference between local and global
variables in C++. Use functions to show scope.*/

#include <iostream>
using namespace std;


int globalVar = 100;


void showLocal() {
    int globalVar = 10;
    cout << "\nInside showLocal() - Local globalVar: " << globalVar ;
}


void showGlobal() {
    cout << "\nInside showGlobal() - Global globalVar: " << ::globalVar ;
   
}

int main() {
    cout << "\nIn main() - Global globalVar: " << globalVar ;

    showLocal();   
    showGlobal();  

  
}


