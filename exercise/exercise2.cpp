#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year you wanna check";
    cin>>year;
    if(year%4==0)
    {cout<<year<<" is a leap year";}
    else if(year%100==0)
    {cout<<year<<" is a leap year";}
    else if(year%400==0)
    {cout<<year<<" is a leap year";}
    else cout<<"the year is not a leap year";
}