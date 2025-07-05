// Dynamic constuctor

#include<iostream>
using namespace std;

class maths
{
	public:
		int a,b,c,d;
		
	maths(int x,int y,int z,int m)
	{
		a=x;
		b=y;
		c=z;
		d=m;
	}
	maths(int x)
	{
		a=x;
	}
};

main()
{
	maths* m2=new maths(12);
	cout << "\n size of m2= " << sizeof(m2);
	
	maths m1(12,13,14,15);
	cout << "\n size of m1=" << sizeof(m1);
}
