// Example for Factorial in c++

#include<iostream>
using namespace std;

	
void showResutalt()
{
	int num,i,f=1;
	

    cout << "Enter Your Number: ";
    cin >> num;
	
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	
		cout << "\n Enter number " << num << " Factorial " << f;
	
	
};

main()
{
	showResutalt();
}


