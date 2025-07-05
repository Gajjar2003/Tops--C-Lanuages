/*Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task.*/

#include<iostream>
using namespace std;

void arearectangle()
{  
   
   int l,w,sum;
   
   cout << "\n Enter Your length and width: ";
   cin >> l >> w;
   sum=l*w;
   cout << "\nArea Of Length " << l << " Area of Width " << w << " Area of a rectangle " << sum ;
   
};

main()
{
	arearectangle();
}
