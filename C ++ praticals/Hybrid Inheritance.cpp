//example for Hybrid Inheritance

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
class B : virtual public A
{
	public:
		int b;
		void getb()
		{
			cout << "Please enter your value is b: ";
			cin >> b;
		}
		
};
class C  :  virtual public A 
{
	public:
		int c;
		void getc()
		{
			cout << "Please enter your value is c: ";
			cin >> c;
		}
		
	
};
class D: public C, public B
{
		public:
		int d;
		void getd()
		{
			cout << "Please enter your value is d: ";
			cin >> d;
		}
		
		void addition()
		{
			cout << "addition is = " << a+b+c+d;
		}
		
};

main()
{
	D d1;
	d1.geta();
	d1.getb();
	d1.getc();
	d1.getd();
	d1.addition();
}
