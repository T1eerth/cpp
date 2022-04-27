#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0,m;
    cout<<"Enter the number";
    cin>>n;
    m=n;
    while(n>0)
    {r=n%10;
    n=n/10;
    sum+=r*r*r;}
    if (sum==m)
    {
        cout<<"It's an armstrong no.";
    }
    else
    {
        cout<<"its not an armstrong no.";
    }
    
}