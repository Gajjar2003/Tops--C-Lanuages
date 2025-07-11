//example for file handing 

#include<iostream>
#include<fstream>
using namespace std;

main()
{
	char data[100];
	fstream f1;
	f1.open("hello txt",ios::out);
	f1<<"hello world !";
	f1.close();
	
	f1.open("hello txt",ios::in);
	f1.getline(data,20);
	cout << "\n reading data form file handing = " << data;
	f1.close();
}
