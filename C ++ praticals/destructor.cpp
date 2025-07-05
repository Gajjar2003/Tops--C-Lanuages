// example destructor



#include<iostream>
using namespace std;

class maths
{
	int a,b;
	public:
	// simple constuctor
	
	maths() 
	{
        cout << "Simple constructor is called\n";
    }

	
	// parameterized constuctor
	
	maths(int x , int y)
	{
		a=x;
		b=y;
	}
	
	void display()
	{
		cout << "\n a = " << a << "\t b = " << b;
	}
	
	// copy constuctor
	
	maths(maths &m2)
	{
		a=m2.a;
		b=m2.b;
	}
	
	~maths()
	{
		cout << "\n Destrutor celled";
	}
	
	

};

 int main()
{
   maths m1,m2(100,102);
   m2.display();  
   maths m5(200,400);
   maths m3=m5;
   m3.display();
}
