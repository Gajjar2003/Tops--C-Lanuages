//example for poltmoephism overloading

#include<iostream>
using namespace std;

class Maths
{
	public:
		void add(int a, int b)
		{
			cout << "\n addition is = " << a+b;
		}
		void add(float x, float y ,float z )
		{
			cout << "\n floating value is = " <<x+y+z;
		}
};

main()
{
     Maths m1;
     m1.add(12,12);
     m1.add(1.2,4.5,22.5);
}
