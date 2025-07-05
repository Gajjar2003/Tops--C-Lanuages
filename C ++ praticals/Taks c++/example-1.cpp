#include<iostream>
#include<string>
using namespace std;

class user
{
    int contact;
    char name[20], email[50];

public:
    void getUser()
    {
        cout << "\nPlease Enter your Name, Email, and Contact: ";
        cin >> name >> email >> contact;
    }

    void showUser()
    {
        cout << "\nName    = " << name;
        cout << "\nEmail   = " << email;
        cout << "\nContact = " << contact;
    }
};

int main()
{
    user u1,u2;
    
    cout << "\n Enter Information for User" ;
   u1.getUser();
    
    cout << "\n Displaying Information for User";
    u1.showUser();
    
    cout << "\n Enter Information for User" ;
   u2.getUser();
    
    cout << "\n Displaying Information for User";
    u2.showUser();
    
    

   
}

