//example for  single inheritance


#include<iostream>
using namespace std;

class category
{ 
    protected:
	int category_id;
	char category_name[20];
	public:
		
		void getcategory()
		{
			cout << "Enter your category id and name: ";
			cin >> category_id >> category_name ;
		}
};

class product:public category
{
	public:
		int product_id;
		char product_name[20];
		float price;
		
		void getproduct()
		{
			cout << "Please enter your product id , name and price: ";
			cin >> product_id >> product_name >> price;
		}
		
		void showprouct()
		{
			cout << "\n category_id = " << category_id << "\t category_name " << category_name;
			cout << "\n product_id = " << product_id << "  \t product_name " << product_name;
			cout << "\t price " << price;
		}
};


main()
{
	product p1;
	p1.getcategory();
	p1.getproduct();
	p1.showprouct();	
}







