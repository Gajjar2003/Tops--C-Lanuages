// example for static class

#include<iostream>
using namespace std;

class Maths
{
	public:
		static int objcount;
		Maths()
		{
			objcount++;
		}
		static void diaplay()
		{
			cout << "Counting for static value = " << Maths::objcount;
		}
};
int Maths::objcount=0;
main()
{
	Maths m1,m2,m3;
	Maths::diaplay();
}
