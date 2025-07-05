//example fo class and objects

#include<iostream>
using namespace std;
class produst
{
	public:
		int id;
		char name[20];
		float price;
		
		
  void getuser()
  {
  	cout << "\nEnter Your id & User name and price:";
  	cin>> id >> name >> price;
  };		
  
  void showuser()
  {
  	cout << "\nId="<<id;
  	cout << "\nName=" << name;
  	cout << "\nPrice=" <<price;
  };
};
 main()
{   
    produst p1;
	p1.getuser();
	p1.showuser();
}
