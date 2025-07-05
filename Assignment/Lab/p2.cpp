//Write a C++ program that accepts user input for their name and age and then displays a personalized greeting

#include<iostream>
using namespace std;

main()
{
	int age;
	char name[20];
	
	cout << "\n Please Enter your Name and Age: ";
	cin >> name >> age;
	cout << "\n Enter Your name " << name << " and Age " << age;
}
