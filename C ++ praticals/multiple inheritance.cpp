// example for multiple inheritance

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

class brand
{ 
    protected:
	int brand_id;
	char brand_name[20];
	public:
		
		void getbrand()
		{
			cout << "Enter your brand id and name: ";
			cin >> brand_id >> brand_name ;
		}
};

class product:public category,protected brand
{
			public:
		int product_id;
		char product_name[20];
		float price;
		
		void getproduct()
		{
			this->getbrand();
			cout << "Please enter your product id , name and price: ";
			cin >> product_id >> product_name >> price;
		}
		
		void showprouct()
		{
			cout << "\n category_id = " << category_id << "\t category_name " << category_name;
			cout << "\n brand_id = " << brand_id << "\t          brand_id " << brand_id;
			cout << "\n product_id = " << product_id << "  \t product_name " << product_name;
			cout << "\t\n price " << price;
		}
				
};

main()
{
	product p1;
	p1.getcategory();
	p1.getproduct();
	p1.showprouct();
}


