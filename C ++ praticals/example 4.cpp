// example for area of cricle , Rectangle , Triangle class and objecat
#include<iostream>
using namespace std;

void areaOfCireal(){
    
    int r;
    float ans;
    cout << "Enter your redius: ";
    cin >> r;
    
    ans=r*r*3.14;
    cout << "Enter your redius is " <<  r << " cirecle " << ans;
};

void  areaRectangle(){
    
    int l,w,sum;
    cout << "\nEnter your length and width: ";
    cin >> l >> w;
    sum=l*w;
    cout << "\nEnter your length " << l <<  " Width is " << w <<  " rectangle " << sum; 
};

void  areaOfTriangle()
{
    int b,h,ans1;
    cout << "\nEnter your Base and heigth: ";
    cin >> b >> h;
    ans1=b*h*1/2;
    cout << "\n Enter your base " << b << " and heigth " << h << " triangle " << ans1;
}

int main()
{
    areaOfCireal();
    areaRectangle();
    areaOfTriangle();
}
