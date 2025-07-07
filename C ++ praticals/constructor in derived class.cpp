//example for constructor in derived class
#include<iostream>
using namespace std;

class Parent
{
    public:
        Parent()
        {
            cout << "\nParent class called";
        }
};

class Child
{
    public:
        Child()
        {
            cout << "\nChild class called";
        }
};

int main()
{
    Child c1;
}


