//example for poylmorphism pure virtual function

#include<iostream>
using namespace std;

class Parent
{
	public:
		virtual void display()=0;
		
};

class Child : public Parent
{
	public:
		void display() 
		{
			cout << "\nChild method called";
		}
};

int main()
{
	Child c1;
	c1.display(); 
	
	
	
}

