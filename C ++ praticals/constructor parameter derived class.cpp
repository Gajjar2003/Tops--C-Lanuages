//example for constructor parameter derived class

#include<iostream>
using namespace std;

class Parent
{
    public:
        Parent(int x)
        {
            cout << "\nParent class  x = " << x;
        }
};

class Child : public Parent
{
    public:
        Child(int a , int b, int x):Parent(x)
        {
            cout << "\nChild class  a = " << a << " \t b = " << b ;
        }
};

int main()
{
    Child c1(12,45,78);
}


