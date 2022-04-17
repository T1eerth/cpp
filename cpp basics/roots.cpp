#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,r1,r2;
    r1=0;
    r2=0;
    cout<<"enter the coefficients";
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"the roots are"<<r1<<" "<<r2;
    return 0;


}