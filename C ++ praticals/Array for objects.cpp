// example for array in objects

#include<iostream>
using namespace std;
 
class User
{
	int id;
	char name[10];
	 
	 
	 public:
	void getUser()
	{
	   cout << "\n Enter Your Id and User name: ";
	   cin >> id >> name;	
	 };
	 
	 
	 void showUser()
	 {
	 	cout << "\nId=" << id;
	 	cout << "\nName=" << name;
	 };
	 
};

main()
{
	int i;
	User u[3];
	
	for(i=0;i<3;i++)
	{
		cout << "\nEnter Id " << i+1 << "User detalis";
		u[i].getUser();
	}
	
		for(i=0;i<3;i++)
	{
		cout << "\nShow  Id " << i+1 << "User detalis";
		u[i].showUser();
	}
	
	
 } 
 
