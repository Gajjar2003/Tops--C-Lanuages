/*Multiplication Table Write a C++ program to display the multiplication table of a given number using a for
loop*/

#include<iostream>
using namespace std;
main()
{
	int number,i;
	cout << "please enter your number is: ";
	cin >> number;
	
	for(i=0;i<=10;i++)
	{
		cout <<"\n" << number << " X " << i  << " = " << number*i;
	}
}
