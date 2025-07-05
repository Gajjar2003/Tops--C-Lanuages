/*Write a C++ program that accepts an array of integers, calculates the sum and
average, and displays the results.*/

#include<iostream>
using namespace std;

main()
{
	int n;
	cout << "Please enter your number :";
	cin >> n;
	
	int i,sum=0;
	int arry[n];
	
	for(i=0;i<n;i++)
	{
		cin >> arry[i];
		sum += arry[i];
		
	}
	
	float average = (float)sum / n;
	
	cout << "\nSum = " << sum  << " Average = " << average ;
     
}
