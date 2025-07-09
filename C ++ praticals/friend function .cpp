//example for friend function

#include<iostream>
using namespace std;

class Maths
{
	int a, b;

	public:
		Maths(int a, int b)  
		{
			this->a = a;
			this->b = b;
		}

		friend void add(Maths);  
};

void add(Maths m1)
{
	cout << "\nAddition of a and b = " << m1.a + m1.b;
}
 main() 
{
	Maths m1(12, 45);
	add(m1);  

	
}

