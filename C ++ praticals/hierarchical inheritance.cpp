// example for hierarchical inheritance

#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		void geta()
		{
			cout << "Please enter your value is a: ";
			cin >> a;
		}
};
class B : public A
{
	public:
		int b;
		void getb()
		{
			cout << "Please enter your value is b: ";
			cin >> b;
		}
		void add()
		{
			cout << "add = " << a+b;
		}
};
class C  : public B 
{
	public:
		int c;
		void getc()
		{
			cout << "Please enter your value is c: ";
			cin >> c;
		}
		
		void add()
		{
			cout << "addition is = " << a+c;
		}
};

main()
{
	C c1;
	c1.geta();
	c1.getb();
	c1.getc();
	c1.add();
	cout << "\n";
	B b1;
	b1.geta();
	b1.getb();
	b1.add();
}

