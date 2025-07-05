/*Write a C++ program that performs both implicit and explicit type conversions and
prints the results*/


#include <iostream>
using namespace std;

int main() {
    
    int intVal = 10;
    float floatVal = intVal;  

    cout << "Implicit Type Conversion:" << endl;
    cout << "Integer value: " << intVal << endl;
    cout << "Converted to float: " << floatVal << endl;

    
    float a = 5.5;
    int b = 2;
    float result = a + b; 

    cout << "Result of a + b (float + int): " << result << endl;

 
    float original = 7.8;
    int casted = (int)original; 

    cout << "\nExplicit Type Conversion:" << endl;
    cout << "Original float value: " << original << endl;
    cout << "Converted to int (casted): " << casted << endl;

   
    double d = 9.99;
    int i = static_cast<int>(d);

    cout << "Using static_cast: double " << d << " -> int " << i << endl;

    return 0;
}

