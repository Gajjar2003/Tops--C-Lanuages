//example for template 

#include<iostream>
using namespace std;

template<typename T>

class Arry
{
	T a[5],temp;
	public:
	Arry()
	{
		for(int i=0;i<=5;i++)
		{
		  cout << "Enter your number is  " << i+1  << ":" ;
		  cin >> a[i];
		}
	}
	
	T sort()
	{
		for(int i=0;i<=5;i++)
		{
			for(int j=i+1;j<5;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}
	
	T display()
	{
		for(int i=0;i<=5;i++)
		{
			cout << "\n" << a[i];
		}
	}
};

main()
{

	Arry<int> a1;
	a1.sort();
	a1.display();
	
	
	
	
	
}
