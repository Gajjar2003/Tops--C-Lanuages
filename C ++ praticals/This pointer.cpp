// This pionter c++

#include<iostream>
using namespace std;

class maths {
    int a, b;

public:
    
    maths(int a, int b) {
        this->a = a;
        this->b = b;
    }

    
    void display() {
        cout << "\na = " << a << "\tb = " << b << endl;
    }
};

int main() {
   
    maths m1(12, 3);
    m1.display();
    maths m2(100,100);
    m2.display();

  
}

