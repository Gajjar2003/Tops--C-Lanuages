/*Write a program that implements inheritance using a base class Person and derived
classes Student and Teacher. Demonstrate reusability through inheritance*/

#include<iostream>
using namespace std;

class preson
{
   protected:
		int age;
		char name[20];
		
		public:
		void presondetalis()
		{
		    cout << "\nEnter your name and age: ";
		    cin >> name >> age;
	    } 
	    
	    void presonshow()
	    {
	    	cout << "\nName = " << name;
	    	cout << "\nAge = " <<age;
		}
};
class student:public preson
{
	protected:
		int Roll_number;
		float marks;
		
		public:
			void studentdetalis()
			{
				cout << "\nEnter your Roll number and marks: ";
				cin >> Roll_number >> marks;
			}
			void studentshow()
			{
				cout << "\nRoll number = " << Roll_number;
				cout << "\nMarks = " << marks;
			}
};

class Teacher:public preson
{
	private:
		int id;
		char subject[20];
		
		public:
		void teacherdetalis()
		{
			cout << "\nEnter your id and subject : ";
			cin >> id >> subject;
		}
		void teachershow()
		{
			cout << "\n Id = " << id;
			cout << "\n Subject = " << subject;
		}
};

main()
{
	cout << "\n Student Detalis ";
	student s1;
	s1.presondetalis();
	s1.studentdetalis();
	s1.presonshow();
    s1.studentshow(); 
    
    cout << "\n\nTeacher Detalis ";
    Teacher t1;
    t1.presondetalis();
    t1.teacherdetalis();
    t1.presonshow();
    t1.teachershow();
    
}


