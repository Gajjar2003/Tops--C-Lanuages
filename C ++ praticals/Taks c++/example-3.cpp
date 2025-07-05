// example for construtor use to simple interest 

#include<iostream>
using namespace std;

class simple
{
	private:
	int p,r,t,total;
	
	public:
	simple()
	{
		cout << "Enter your Principal: ";
		cin >> p;
		cout << "\nEnter your rate: ";
		cin >> r;
		cout << "\nEnter your time: ";
		cin >> t;
		
		total=(p*r*t)/100;
	}
	
	void display()
	{
		cout << "\n Your simple interest is " << total;
	}
};

 int main()
{
	simple s1;       
    s1.display();  
}
