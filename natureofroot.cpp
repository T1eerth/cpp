#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter a,b,c";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d==0)
    {
        cout<<"the roots are real and equal";
    }
    else if(d>0)
    {
        cout<<"the roots are real and distinct";
    }
    else if(d<0)
    {
        cout<<"the roots are imaginary";
    }
    return 0;
}