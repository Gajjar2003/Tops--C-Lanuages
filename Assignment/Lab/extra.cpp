/*Write a C++ program that defines a class Calculator with functions for addition,
subtraction, multiplication, and division. Create objects to use these functions.*/

#include<iostream>
using namespace std;

class calculator
{
	private:
		int num1,num2;

		
		public:
			void getinput()
			{
				cout << "Please enter first and second number: ";
				cin >> num1 >> num2;
			}
			
			void add()
			{
				cout << "\n addition  is = " << (num1+num2);
			}
			void sub()
			{
				cout <<"\n subtract is = " << (num1-num2);
			}
			void mul()
			{
				cout << "\n multiply is = "  << (num1*num2);
			}
			void div()
			{
				if (num2 != 0)
                cout << "\n Division is = " << (num1/num2);
                  else
              cout << "Division by zero is not allowed." ;
              }
			
};


main()
{  
   calculator c1;
   c1.getinput();
   c1.add();
   c1.sub();
   c1.mul();
   c1.div();
	
}
