//example for friend class

#include<iostream>
using namespace std;


class Maths;

class Calculator {
	public:
		void add(Maths m); 
};

class Maths {
	int a, b;

	public:
		Maths(int a, int b) {
			this->a = a;
			this->b = b;
		}

	
		friend class Calculator;
};


void Calculator::add(Maths m) {
	cout << "\nAddition of a and b = " << m.a + m.b;
}

 main() {
	Maths m1(12, 45);
	Calculator c;
	c.add(m1); 


}

